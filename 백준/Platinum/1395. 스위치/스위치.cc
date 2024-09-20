#include <iostream>
#include <vector>
#include <cmath>

#define int long long
using namespace std;

void update_lazy(vector<long long> &tree, vector<long long> &lazy, int node, int start, int end){
    lazy[node] %= 2;
    if(lazy[node] != 0){
        tree[node] = end - start + 1 - tree[node];
        if(start != end){
            lazy[node * 2] += 1;
            lazy[node * 2 + 1] += 1;
        }
        lazy[node] = 0;
    }
}

void update_range(vector<long long> &tree, vector<long long> &lazy, int node, int start, int end, int left, int right){
    update_lazy(tree, lazy, node, start, end);
    if(left > end || right < start) return;
    if(left <= start && end <= right){
        tree[node] = end - start + 1 - tree[node];
        if(start != end){
            lazy[node * 2]++;
            lazy[node * 2 + 1]++;
        }
        return;
    }
    update_range(tree, lazy, node * 2, start, (start + end) / 2, left, right);
    update_range(tree, lazy, node * 2 + 1, (start + end) / 2 + 1, end, left, right);
    tree[node] = tree[node * 2] + tree[node * 2 + 1];
}

long long query(vector<long long> &tree, vector<long long> &lazy, int node, int start, int end, int left, int right){
    update_lazy(tree, lazy, node, start ,end);
    if(left > end || right < start) return 0;
    if(left <= start && end <= right) return tree[node];
    long long lsum = query(tree, lazy, node * 2, start, (start + end) / 2, left, right);
    long long rsum = query(tree, lazy, node * 2 + 1, (start + end) / 2 + 1, end, left, right);
    return lsum + rsum;
}

signed main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    int h = (int)ceil(log2(n));
    int tree_size = (1 << (h + 1));
    vector<long long> tree(tree_size);
    vector<long long> lazy(tree_size);
    for(int i = 0; i < m; i++){
        int check, a, b;
        cin >> check >> a >> b;
        if(check == 0) update_range(tree, lazy, 1, 0, n - 1, a - 1, b - 1);
        else cout << query(tree, lazy, 1, 0, n - 1, a - 1, b - 1) << '\n';
    }
    return 0;
}