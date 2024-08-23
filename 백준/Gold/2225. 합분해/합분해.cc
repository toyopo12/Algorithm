#include <iostream>
#define MOD 1000000000

using namespace std;

int arr[202][500];

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k;
    cin >> n >> k;
    arr[0][0]=1;
    for(int l=0;l<=k;l++)
    {
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=n;j++)
            {
                arr[l+1][i+j]+=arr[l][i];
                arr[l+1][i+j]%=MOD;
            }
        }
    }
    cout << arr[k][n];
    return 0;
}