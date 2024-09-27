#include <iostream>
#include <algorithm>

using namespace std;

int arr[1000001];
int n;
long long k;

bool check(int mid){
    long long good = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] >= mid || good > k) break;
        else good += mid - arr[i];
    }
    if(good > k) return 0;
    else return 1;
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> k;
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n);
    if(n == 1){
        cout << arr[0] + k;
        return 0;
    }
    int start = 1;
    int end = 1000000001;
    while(start < end - 1){
        int mid = (start + end) / 2;
        if(check(mid) == 1) start = mid;
        else end = mid;
    }
    cout << start;
    return 0;
}