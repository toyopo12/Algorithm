#include <iostream>

using namespace std;

int arr[1000010];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    arr[0]=0;
    arr[1]=1;
    for(int i=2;i<=1000000;i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
        arr[i]%=1000000000;
    }
    if(n<0 && n%2==0)
    {
        cout << "-1\n" << arr[-n];
    }
    else if(n==0)
    {
        cout << "0\n0";
    }
    else if(n<0)
    {
        cout << "1\n" << arr[-n];
    }
    else
    {
        cout << "1\n" << arr[n];
    }
    return 0;
}