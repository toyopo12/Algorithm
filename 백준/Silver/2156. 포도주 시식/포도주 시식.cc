#include <iostream>

using namespace std;

int arr[3][10010];

int main()
{
    int n;
    int good=0;
    cin >> n >> arr[1][1];
    for(int i=2;i<=n;i++)
    {
        int x;
        cin >> x;
        for(int j=0;j<=2;j++)
        {
            if(arr[0][i]<arr[j][i-1])
            {
                arr[0][i]=arr[j][i-1];
            }
        }
        arr[1][i]=arr[0][i-1]+x;
        arr[2][i]=arr[1][i-1]+x;
    }
    for(int i=0;i<=2;i++)
    {
        if(good<arr[i][n])
        {
            good=arr[i][n];
        }
    }
    cout << good;
    return 0;
}