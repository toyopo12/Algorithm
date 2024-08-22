#include <iostream>

using namespace std;

int arr[100010];
int sum[100010];

int good;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k;
    cin >> n >> k;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for(int i=0;i<k;i++)
    {
        sum[0]+=arr[i];
    }
    good=sum[0];
    for(int i=1;i<n-k+1;i++)
    {
        sum[i]=sum[i-1]+arr[i+k-1]-arr[i-1];
        if(good<sum[i])
        {
            good=sum[i];
        }
    }
    cout << good;
    return 0;
}