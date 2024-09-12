//미리 주기 찾아서 해결
#include <iostream>

using namespace std;

long long arr[1500015];

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n;
    cin >> n;
    n %= 1500000;
    arr[0] = 0;
    arr[1] = 1;
    for(int i = 2; i <= 1500000; i++){
        arr[i] = arr[i - 1] + arr[i - 2];
        arr[i] %= 1000000;
    }
    cout << arr[n];
    return 0;
}