#include <iostream>
#include <algorithm>

using namespace std;

int arr[10010];
int num[101];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k;
    cin >> n >> k;
    for(int i=0;i<n;i++)
    {
        cin >> num[i];
    }
    sort(num,num+n);
    arr[0]=1;
    for(int i=0;i<n;i++)
    {
        for(int j=num[i];j<=k;j++)
        {
            if(j-num[i]>=0)
            {
                arr[j]+=arr[j-num[i]];
            }
        }
    }
    cout << arr[k];
    return 0;
}