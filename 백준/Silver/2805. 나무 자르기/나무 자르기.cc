#include <iostream>

using namespace std;

int tree[1000001];

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++) cin >> tree[i];
    int start = 0;
    int end = 1000000001;
    while(start < end - 1){
        long long good = 0;
        int mid = (start + end) / 2;
        for(int i = 0; i < n; i++) if(tree[i] > mid) good += tree[i] - mid;
        if(good < m) end = mid;
        else start = mid;
    }
    cout << start;
    return 0;
}