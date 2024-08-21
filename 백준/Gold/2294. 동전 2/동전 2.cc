#include <iostream>
#include <algorithm>

using namespace std;

int arr[101];
int good[10010];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k;
    cin >> n >> k;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    for(int i=1;i<=k;i++)
    {
        good[i]=100000;
    }
    for(int i=1;i<=k;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i-arr[j]<0)
            {
                break;
            }
            int hi=good[i];
            if(hi>good[i-arr[j]]+1)
            {
                good[i]=good[i-arr[j]]+1;
            }
        }
    }
    if(good[k]!=100000)
    {
        cout << good[k];
    }
    else
    {
        cout << "-1";
    }
    return 0;
}