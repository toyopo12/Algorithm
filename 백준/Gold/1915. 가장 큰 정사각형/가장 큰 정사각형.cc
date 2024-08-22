#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int arr[1010][1010];
bool good[1010][1010];

int hi;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin >> n >> m;
    for(int i=1;i<=n;i++)
    {
        string x;
        cin >> x;
        for(int j=0;j<m;j++)
        {
            if(x[j]=='1')
            {
                good[i][j+1]=1;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(good[i][j]==1)
            {
                arr[i][j]=min(min(arr[i][j-1],arr[i-1][j]),min(arr[i-1][j-1],arr[i-1][j]))+1;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(hi<arr[i][j])
            {
                hi=arr[i][j];
            }
        }
    }
    cout << hi*hi;
    return 0;
}