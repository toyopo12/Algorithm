#include <iostream>

using namespace std;

long long arr[1000010];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    arr[1]=1;
    arr[2]=2;
    arr[3]=4;
    for(int i=4;i<=1000000;i++)
    {
        arr[i]=arr[i-1]+arr[i-2]+arr[i-3];
        arr[i]%=1000000009;
    }
    while(n--)
    {
        int x;
        cin >> x;
        cout << arr[x] << '\n';
    }
    return 0;
}