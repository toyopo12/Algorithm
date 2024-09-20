#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

#define int long long
using namespace std;

void init(vector<long long> &arr, vector<pair<long long, long long>> &tree, int node, int start, int end){
    if(start == end) tree[node] = {arr[start], arr[start]};
    else{
        init(arr, tree, node * 2, start, (start + end) / 2);
        init(arr, tree, node * 2 + 1, (start + end) / 2 + 1, end);
        tree[node] = {min(tree[node * 2].first, tree[node * 2 + 1].first), max(tree[node * 2].second, tree[node * 2 + 1].second)};
    }
}

pair<long long, long long> query(vector<pair<long long, long long>> &tree, int node, int start, int end, int left, int right){
    if(left > end || right < start) return {1000000000, 0};
    if(left <= start && end <= right) return tree[node];
    auto [rlow, rhigh] = query(tree, node * 2, start, (start + end) / 2, left, right);
    auto [llow, lhigh] = query(tree, node * 2 + 1, (start + end) / 2 + 1, end, left, right);
    return {min(rlow, llow), max(rhigh, lhigh)};
}

signed main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<long long> arr(n);
    int h = (int)ceil(log2(n));
    int tree_size = (1 << (h + 1));
    vector<pair<long long, long long>> tree(tree_size);
    for(int i = 0; i < n; i++) cin >> arr[i];
    init(arr, tree, 1, 0, n - 1);
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        auto [low, high] = query(tree, 1, 0 , n - 1, a - 1, b - 1);
        cout << high - low << '\n';
    }
    return 0;
}