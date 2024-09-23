#include <iostream>

using namespace std;

int arr[10001];

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, k;
    cin >> n >> k;
    for(int i = 0; i < n; i++) cin >> arr[i];
    long long start = 0;
    long long end = 0x7fffffff;
    while(start <= end){
        long long mid = (start + end) / 2;
        long long big = 0;
        for(int i = 0; i < n; i++) big += arr[i] / mid;
        if(big < k) end = mid - 1;
        else start = mid + 1;
    }
    cout << end;
    return 0;
}