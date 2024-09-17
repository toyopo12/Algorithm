#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void init(vector<long long> &arr, vector<long long> &tree, int node, int start, int end){
    if(start == end) tree[node] = arr[start];
    else{
        init(arr, tree, node * 2, start, (start + end) / 2);
        init(arr, tree, node * 2 + 1, (start + end) / 2 + 1, end);
        tree[node] = tree[node * 2] * tree[node * 2 + 1];
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
    tree[node] = tree[node * 2] * tree[node * 2 + 1];
}

long long query(vector<long long> &tree, int node, int start, int end, int left, int right){
    if(left > end || right < start) return 1;
    if(left <= start && end <= right) return tree[node];
    int r = query(tree, node * 2, start, (start + end) / 2, left, right);
    int l = query(tree, node * 2 + 1, (start + end) / 2 + 1, end, left, right);
    return r * l;
}

signed main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, k;
    while(cin >> n >> k){
        vector<long long> arr(n);
        int h = (int)ceil(log2(n));
        int tree_size = (1 << (h + 1));
        vector<long long> tree(tree_size);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(arr[i] > 0) arr[i] = 1;
            else if(arr[i] < 0) arr[i] = -1;
            else arr[i] = 0;
        }
        init(arr, tree, 1, 0, n - 1);
        for(int i = 0; i < k; i++){
            char check;
            int a, b;
            cin >> check >> a >> b;
            if(check == 'C'){
                if(b > 0) update(arr, tree, 1, 0, n - 1, a - 1, 1);
                else if(b < 0) update(arr, tree, 1, 0, n - 1, a - 1, -1);
                else update(arr, tree, 1, 0, n - 1, a - 1, 0);
            }
            else{
                if(query(tree, 1, 0, n - 1, a - 1, b - 1) == 1) cout << '+';
                else if(query(tree, 1, 0, n - 1, a - 1, b - 1) == 0) cout << '0';
                else cout << '-';
            }
        }
        cout << '\n';
    }
    return 0;
}