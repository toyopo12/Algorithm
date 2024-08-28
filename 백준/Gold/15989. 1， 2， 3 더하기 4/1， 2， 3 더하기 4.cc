#include <iostream>

using namespace std;

long long arr[10010][4];

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    arr[1][1]=1;
    arr[2][1]=1;
    arr[2][2]=1;
    arr[3][1]=1;
    arr[3][2]=1;
    arr[3][3]=1;
    for(int i=4;i<=10000;i++)
    {
        arr[i][1]=arr[i-1][1];
        arr[i][2]=arr[i-2][1]+arr[i-2][2];
        arr[i][3]=arr[i-3][1]+arr[i-3][2]+arr[i-3][3];
    }
    for(int i=0;i<t;i++)
    {
        int x;
        cin >> x;
        cout << arr[x][1]+arr[x][2]+arr[x][3] << '\n';
    }
    return 0;
}