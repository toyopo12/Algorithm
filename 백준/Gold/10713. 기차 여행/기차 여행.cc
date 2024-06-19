#include <iostream>

using namespace std;

typedef struct
{
    int a;
    int b;
    int c;
    int count;
}hi;

hi good[100010];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long sum=0;
    int n,m;
    int arr[100010];
    cin >> n >> m;
    for(int i=1;i<=m;i++)
    {
        cin >> arr[i];
    }
    int now=arr[1];
    for(int i=1;i<=n-1;i++)
    {
        cin >> good[i].a >> good[i].b >> good[i].c;
    }
    for(int i=2;i<=m;i++)
    {
        if(now<arr[i])
        {
            for(int j=now;j<arr[i];j++)
            {
                good[j].count++;
            }
        }
        else
        {
            for(int j=now-1;j>=arr[i];j--)
            {
                good[j].count++;
            }
        }
        now=arr[i];
    }
    for(int i=1;i<=n-1;i++)
    {
        if(good[i].count*good[i].a<good[i].count*good[i].b+good[i].c)
        {
            sum+=good[i].count*good[i].a;
        }
        else
        {
            sum+=good[i].count*good[i].b+good[i].c;
        }
    }
    cout << sum;
    return 0;
}