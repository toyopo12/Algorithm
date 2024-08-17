#include <iostream>

using namespace std;

int arr[1010];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> arr[i];
    }
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=i/2;j++)
        {
            if(arr[i]<arr[j]+arr[i-j])
            {
                arr[i]=arr[j]+arr[i-j];
            }
        }
    }
    cout << arr[n];
    return 0;
}