#include <iostream>

using namespace std;

int arr[1000001];

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++) cin >> arr[i];
    int start = 0;
    int end = 1000000000;
    while(start <= end){
        int mid = (start + end) / 2;
        long long big = 0;
        for(int i = n - 1; i >= 0; i--) if(arr[i] > mid) big += arr[i] - mid;
        if(big < m) end = mid - 1;
        else if(big > m) start = mid + 1;
        else{
            cout << mid;
            return 0;
        }
    }
    cout << end;
    return 0;
}