#include <iostream>
#include <algorithm>

using namespace std;

int arr[501][501];

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int sum=0;
    int n;
    cin >> n >> arr[1][1];
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            int x;
            cin >> x;
            if(j==1)
            {
                arr[i][j]=arr[i-1][j]+x;
            }
            else if(j==i)
            {
                arr[i][j]=arr[i-1][j-1]+x;
            }
            else
            {
                arr[i][j]=max(arr[i-1][j-1],arr[i-1][j])+x;
            }
        }
    }
    for(int j=1;j<=n;j++)
    {
        if(sum<arr[n][j])
        {
            sum=arr[n][j];
        }
    }
    cout << sum;
    return 0;
}