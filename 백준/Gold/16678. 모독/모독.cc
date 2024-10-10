#include <iostream>

using namespace std;

int arr[100010];
long long sum = 0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cin.tie(nullptr);
    int now = 1;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n);
    for(int i = 0; i < n; i++){
        if(now <= arr[i]){
            sum += arr[i] - now;
            now++;
        }
    }
    cout << sum;
    return 0;
}