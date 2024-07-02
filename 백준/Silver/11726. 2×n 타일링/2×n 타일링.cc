#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[10010]={0,1,2};
    if(n==1 || n==2)
    {
        cout << arr[n];
    }
    else
    {
        for(int i=3;i<=n;i++)
        {
            arr[i]=(arr[i-2]+arr[i-1])%10007;
        }
        cout << arr[n];
    }
    return 0;
}