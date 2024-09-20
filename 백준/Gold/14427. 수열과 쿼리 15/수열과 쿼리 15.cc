#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

#define int long long
using namespace std;

void init(vector<long long> &arr, vector<pair<long long, long long>> &tree, int node, int start, int end){
    if(start == end) tree[node] = {arr[start], start};
    else{
        init(arr, tree, node * 2, start, (start + end) / 2);
        init(arr, tree, node * 2 + 1, (start + end) / 2 + 1, end);
        if(tree[node * 2].first < tree[node * 2 + 1].first) tree[node] = tree[node * 2];
        else if(tree[node * 2].first > tree[node * 2 + 1].first) tree[node] = tree[node * 2 + 1];
        else{
            tree[node].first = tree[node * 2].first;
            tree[node].second = min(tree[node * 2].second, tree[node * 2 + 1].second);
        }
    }
}

void update(vector<long long> &arr, vector<pair<long long, long long>> &tree, int node, int start, int end, int index, long long val){
    if(index < start || index > end) return;
    if(start == end){
        tree[node].first = val;
        return;
    }
    update(arr, tree, node * 2, start, (start + end) / 2, index, val);
    update(arr, tree, node * 2 + 1, (start + end) / 2 + 1, end, index, val);
    if(tree[node * 2].first < tree[node * 2 + 1].first) tree[node] = tree[node * 2];
    else if(tree[node * 2].first > tree[node * 2 + 1].first) tree[node] = tree[node * 2 + 1];
    else{
        tree[node].first = tree[node * 2].first;
        tree[node].second = min(tree[node * 2].second, tree[node * 2 + 1].second);
    }
}

pair<long long, long long> query(vector<pair<long long, long long>> &tree, int node, int start, int end, int left, int right){
    if(left > end || right < start) return {1000000000, 1000000000};
    if(left <= start && end <= right) return tree[node];
    auto [rmin, rmindex] = query(tree, node * 2, start, (start + end) / 2, left, right);
    auto [lmin, lmindex] = query(tree, node * 2 + 1, (start + end) / 2 + 1, end, left, right);
    if(rmin < lmin) return {rmin, rmindex};
    else if(rmin > lmin) return {lmin, lmindex};
    else return {rmin, min(rmindex, lmindex)};
}

signed main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n;
    vector<long long> arr(n);
    int h = (int)ceil(log2(n));
    int tree_size = (1 << (h + 1));
    vector<pair<long long, long long>> tree(tree_size);
    for(int i = 0; i < n; i++) cin >> arr[i];
    init(arr, tree, 1, 0, n - 1);
    cin >> m;
    for(int i = 0; i < m; i++){
        int check;
        cin >> check;
        if(check == 1){
            int a, b;
            cin >> a >> b;
            update(arr, tree, 1, 0, n - 1, a - 1, b);
        }
        else cout << tree[1].second + 1 << '\n';
    }
    return 0;
}