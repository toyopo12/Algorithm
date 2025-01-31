#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void update(vector<long long> &tree, int node, int start, int end, int index, long long val){
    if(index < start || index > end) return;
    if(start == end){
        tree[node] = val;
        return;
    }
    update(tree, node * 2, start, (start + end) / 2, index, val);
    update(tree, node * 2 + 1, (start + end) / 2 + 1, end, index, val);
    tree[node] = tree[node * 2] + tree[node * 2 + 1];
}

long long query(vector<long long> &tree, int node, int start, int end, int left, int right){
    if(left > end || right < start) return 0;
    if(left <= start && end <= right) return tree[node];
    long long lsum = query(tree, node * 2, start, (start + end) / 2, left, right);
    long long rsum = query(tree, node * 2 + 1, (start + end) / 2 + 1, end, left, right);
    return lsum + rsum;
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    int h = (int)ceil(log2(n));
    int tree_size = (1 << (h + 1));
    vector<long long> tree(tree_size);
    for(int i = 0; i < m; i++){
        int check, a, b;
        cin >> check >> a >> b;
        if(check == 1) update(tree, 1, 0, n - 1, a - 1, b);
        else{
            if(a <= b) cout << query(tree, 1, 0, n - 1, a - 1, b - 1) << '\n';
            else cout << query(tree, 1, 0, n - 1, b - 1, a - 1) << '\n';
        }
    }
    return 0;
}