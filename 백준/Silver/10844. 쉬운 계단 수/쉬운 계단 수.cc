#include <iostream>

using namespace std;

#define int long long

int arr[101][10];

signed main()
{
    int sum=0;
    int n;
    cin >> n;
    for(int j=1;j<=9;j++)
    {
        arr[1][j]=1;
    }
    for(int i=2;i<=100;i++)
    {
        arr[i][0]=arr[i-1][1];
        arr[i][9]=arr[i-1][8];
        for(int j=1;j<=8;j++)
        {
            arr[i][j]=arr[i-1][j-1]+arr[i-1][j+1]%1000000000;
        }
    }
    for(int j=0;j<=9;j++)
    {
        sum+=arr[n][j];
        sum%=1000000000;
    }
    cout << sum;
    return 0;
}