#include <iostream>

using namespace std;

long long arr[100010];

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    long long sum=0;
    cin >> n >> m;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin >> x;
        sum+=x;
        arr[i]=sum;
    }
    for(int i=1;i<=m;i++)
    {
        int a,b;
        cin >> a >> b;
        cout << arr[b]-arr[a-1] << '\n';
    }
    return 0;
}