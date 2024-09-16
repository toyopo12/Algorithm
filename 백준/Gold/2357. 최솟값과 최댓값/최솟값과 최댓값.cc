#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void mininit(vector<long long> &arr, vector<long long> &mintree, int node, int start, int end){
    if(start == end) mintree[node] = arr[start];
    else{
        mininit(arr, mintree, node * 2, start, (start + end) / 2);
        mininit(arr, mintree, node * 2 + 1, (start + end) / 2 + 1, end);
        mintree[node] = min(mintree[node * 2], mintree[node * 2 + 1]);
    }
}

void maxinit(vector<long long> &arr, vector<long long> &maxtree, int node, int start, int end){
    if(start == end) maxtree[node] = arr[start];
    else{
        maxinit(arr, maxtree, node * 2, start, (start + end) / 2);
        maxinit(arr, maxtree, node * 2 + 1, (start + end) / 2 + 1, end);
        maxtree[node] = max(maxtree[node * 2], maxtree[node * 2 + 1]);
    }
}

long long minquery(vector<long long> &mintree, int node, int start, int end, int left, int right){
    if(left > end || right < start) return 0x7fffffff;
    if(left <= start && end <= right) return mintree[node];
    long long lmin = minquery(mintree, node * 2, start, (start + end) / 2, left, right);
    long long rmin = minquery(mintree, node * 2 + 1, (start + end) / 2 + 1, end, left, right);
    return min(lmin, rmin);
}

long long maxquery(vector<long long> &maxtree, int node, int start, int end, int left, int right){
    if(left > end || right < start) return 0;
    if(left <= start && end <= right) return maxtree[node];
    long long lmax = maxquery(maxtree, node * 2, start, (start + end) / 2, left, right);
    long long rmax = maxquery(maxtree, node * 2 + 1, (start + end) / 2 + 1, end, left, right);
    return max(lmax, rmax);
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<long long> arr(n);
    int h = (int)ceil(log2(n));
    int tree_size = (1 << (h + 1));
    vector<long long> mintree(tree_size);
    vector<long long> maxtree(tree_size);
    for(int i = 0; i < n; i++) cin >> arr[i];
    mininit(arr, mintree, 1, 0, n - 1);
    maxinit(arr, maxtree, 1, 0, n - 1);
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        cout << minquery(mintree, 1, 0, n - 1, a - 1, b - 1) << " " << maxquery(maxtree, 1, 0, n - 1, a - 1, b - 1) << '\n';
    }
    return 0;
}