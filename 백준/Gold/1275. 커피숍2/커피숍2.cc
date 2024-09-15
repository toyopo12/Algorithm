#include <iostream>
#include <vector>
#include <cmath>

#define int long long
using namespace std;

void init(vector<long long> &arr, vector<long long> &tree, int node, int start, int end){
    if(start == end) tree[node] = arr[start];
    else{
        init(arr, tree, node * 2, start, (start + end) / 2);
        init(arr, tree, node * 2 + 1, (start + end) / 2 + 1, end);
        tree[node] = tree[node * 2] + tree[node * 2 + 1];
    }
}

void update(vector<long long> &arr, vector<long long> &tree, int node, int start, int end, int index, long long val){
    if(index < start || index > end) return;
    if(start == end){
        arr[index] = val;
        tree[node] = val;
        return;
    }
    update(arr, tree, node * 2, start, (start + end) / 2, index, val);
    update(arr, tree, node * 2 + 1, (start + end) / 2 + 1, end, index, val);
    tree[node] = tree[node * 2] + tree[node * 2 + 1];
}

long long query(vector<long long> &tree, int node, int start, int end, int left, int right){
    if(left > end || right < start) return 0;
    if(left <= start && end <= right) return tree[node];
    long long lsum = query(tree, node * 2, start, (start + end) / 2, left, right);
    long long rsum = query(tree, node * 2 + 1, (start + end) / 2 + 1, end, left, right);
    return lsum + rsum;
}

signed main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, q;
    cin >> n >> q;
    vector<long long> arr(n);
    int h = (int)ceil(log2(n));
    int tree_size = (1 << (h + 1));
    vector<long long> tree(tree_size);
    for(int i = 0; i < n; i++) cin >> arr[i];
    init(arr, tree, 1, 0, n - 1);
    for(int i = 0; i < q; i++){
        int x, y, a, b;
        cin >> x >> y >> a >> b;
        if(x < y) cout << query(tree, 1, 0, n - 1, x - 1, y - 1) << '\n';
        else cout << query(tree, 1, 0, n - 1, y - 1, x - 1) << '\n';
        update(arr, tree, 1, 0, n - 1, a - 1, b);
    }
    return 0;
}