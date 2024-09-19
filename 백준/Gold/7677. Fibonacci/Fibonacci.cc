#include <iostream>

using namespace std;

int arr[15015];

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    arr[0] = 0;
    arr[1] = 1;
    for(int i = 2; i <= 15000; i++){
        arr[i] = arr[i - 1] + arr[i - 2];
        arr[i] %= 10000;
    }
    while(1){
        cin >> n;
        if(n == -1) break;
        n %= 15000;
        cout << arr[n] << '\n';
    }
    return 0;
}