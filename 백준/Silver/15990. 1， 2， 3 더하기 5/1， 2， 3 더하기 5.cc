#include <iostream>

using namespace std;

int arr[100010][4];

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    arr[1][1] = 1;
    arr[2][2] = 1;
    arr[3][1] = 1;
    arr[3][2] = 1;
    arr[3][3] = 1;
    for(int i = 4; i <= 100000; i++){
        arr[i][1] = arr[i-1][2] + arr[i-1][3];
        arr[i][2] = arr[i-2][1] + arr[i-2][3];
        arr[i][3] = arr[i-3][1] + arr[i-3][2];
        arr[i][1] %= 1000000009;
        arr[i][2] %= 1000000009;
        arr[i][3] %= 1000000009;
    }
    while(t--){
        long long sum = 0;
        int n;
        cin >> n;
        sum += arr[n][1];
        sum += arr[n][2];
        sum += arr[n][3];
        cout << sum % 1000000009 << '\n';
    }
    return 0;
}