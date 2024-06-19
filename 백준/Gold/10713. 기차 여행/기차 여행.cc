#include <iostream>

using namespace std;

typedef struct
{
    long long a;
    long long b;
    long long c;
    long long count;
}hi;

hi good[100010];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long sum=0;
    int n,m;
    int now=0;
    cin >> n >> m >> now;
    for(int i=1;i<m;i++)
    {
        int x;
        cin >> x;
        if(x>now)
        {
            good[x].count--;
            good[now].count++;
        }
        else
        {
            good[x].count++;
            good[now].count--;
        }
        now=x;
    }
    for(int i=1;i<n;i++)
    {
        cin >> good[i].a >> good[i].b >> good[i].c;
    }
    for(int i=1;i<=n;i++)
    {
        good[i].count=good[i-1].count+good[i].count;
    }
    for(int i=1;i<=n;i++)
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