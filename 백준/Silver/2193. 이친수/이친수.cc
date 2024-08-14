#include <iostream>

using namespace std;

long long arr[2][99];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    arr[0][1]=0;
    arr[1][1]=1;
    for(int i=2;i<=n;i++)
    {
        arr[0][i]=arr[0][i-1]+arr[1][i-1];
        arr[1][i]=arr[0][i-1];
    }
    cout << arr[0][n]+arr[1][n];
    return 0;
}