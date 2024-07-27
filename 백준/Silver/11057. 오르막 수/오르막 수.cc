#include <iostream>

using namespace std;

int arr[11][1001];

int main()
{
    int n;
    int sum=0;
    cin >> n;
    for(int i=0;i<=9;i++)
    {
        arr[i][1]=1;
    }
    for(int i=2;i<=n;i++)
    {
        for(int j=0;j<=9;j++)
        {
            for(int k=0;k<=j;k++)
            {
                arr[j][i]+=arr[k][i-1];
            }
            arr[j][i]%=10007;
        }
    }
    for(int i=0;i<=9;i++)
    {
        sum+=arr[i][n];
        sum%=10007;
    }
    cout << sum;
    return 0;
}