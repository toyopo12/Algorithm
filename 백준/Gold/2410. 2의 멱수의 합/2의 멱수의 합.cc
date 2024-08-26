#include <iostream>

using namespace std;

int arr[1000010];
int hi[30];

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    int good=1;
    cin >> n;
    hi[0]=1;
    arr[0]=1;
    for(int i=1;i<30;i++)
    {
        good*=2;
        hi[i]=good;
    }
    for(int i=0;i<30;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j-hi[i]>=0)
            {
                arr[j]+=arr[j-hi[i]];
                arr[j]%=1000000000;
            }
        }
    }
    cout << arr[n];
    return 0;
}