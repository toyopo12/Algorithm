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
        tree[node] = tree[node * 2] ^ tree[node * 2 + 1];
    }
}

void update_lazy(vector<long long> &tree, vector<long long> &lazy, int node, int start, int end){
    if(lazy[node] != 0){
        if((end - start) % 2 == 0) tree[node] ^= lazy[node];
        if(start != end){
            lazy[node * 2] ^= lazy[node];
            lazy[node * 2 + 1] ^= lazy[node];
        }
        lazy[node] = 0;
    }
}

void update_range(vector<long long> &tree, vector<long long> &lazy, int node, int start, int end, int left, int right, long long diff){
    update_lazy(tree, lazy, node, start, end);
    if(left > end || right < start) return;
    if(left <= start && end <= right){
        if((end - start) % 2 == 0) tree[node] ^= diff;
        if(start != end){
            lazy[node * 2] ^= diff;
            lazy[node * 2 + 1] ^= diff;
        }
        return;
    }
    update_range(tree, lazy, node * 2, start, (start + end) / 2, left, right, diff);
    update_range(tree, lazy, node * 2 + 1, (start + end) / 2 + 1, end, left, right, diff);
    tree[node] = tree[node * 2] ^ tree[node * 2 + 1];
}

long long query(vector<long long> &tree, vector<long long> &lazy, int node, int start, int end, int left, int right){
    update_lazy(tree, lazy, node, start ,end);
    if(left > end || right < start) return 0;
    if(left <= start && end <= right) return tree[node];
    long long lsum = query(tree, lazy, node * 2, start, (start + end) / 2, left, right);
    long long rsum = query(tree, lazy, node * 2 + 1, (start + end) / 2 + 1, end, left, right);
    return lsum ^ rsum;
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
    vector<long long> tree(tree_size);
    vector<long long> lazy(tree_size);
    for(int i = 0; i < n; i++) cin >> arr[i];
    cin >> m;
    init(arr, tree, 1, 0, n - 1);
    for(int i = 0; i < m; i++){
        int check;
        cin >> check;
        if(check == 1){
            int a, b, c;
            cin >> a >> b >> c;
            update_range(tree, lazy, 1, 0, n - 1, a, b, c);
        }
        else{
            int a;
            cin >> a;
            cout << query(tree, lazy, 1, 0, n - 1, a, a) << '\n';
        }
    }
    return 0;
}