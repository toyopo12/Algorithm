#include <iostream>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int coin[10010]={0};
        int arr[21];
        int n,m;
        cin >> n;
        coin[0]=1;
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        cin >> m;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                if(j-arr[i]>=0)
                {
                    coin[j]=coin[j]+coin[j-arr[i]];
                }
            }
        }
        cout << coin[m] << '\n';
    }
    return 0;
}