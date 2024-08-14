#include <iostream>

using namespace std;

int arr[100010];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int max;
    int n;
    cin >> n >> arr[1];
    max=arr[1];
    for(int i=2;i<=n;i++)
    {
        int x;
        cin >> x;
        if(arr[i-1]<0)
        {
            arr[i]=x;
        }
        else
        {
            arr[i]=arr[i-1]+x;
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    cout << max;
    return 0;
}