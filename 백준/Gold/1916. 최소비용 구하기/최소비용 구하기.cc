#include <iostream>
#include <vector>
#include <queue>
#include <limits>
#define pii pair<int, int>
using namespace std;

int d[1010];
vector<pair<int,int>> arr[1010];
priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;

void di()
{
    while(!pq.empty())
    {
        int x=pq.top().first;
        int y=pq.top().second;
        pq.pop();
        if(x!=d[y])
        {
            continue;
        }
        for(int i=0;i<arr[y].size();i++)
        {
            int a=arr[y][i].first;
            int b=arr[y][i].second;
            if(d[b]>x+a)
            {
                d[b]=x+a;
                pq.push({d[b],b});
            }
        }
    }
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    int start,end;
    cin >> n >> m;
    for(int i=0;i<m;i++)
    {
        int x,y,cost;
        cin >> x >> y >> cost;
        arr[x].push_back({cost,y});
    }
    for(int i=1;i<=n;i++)
    {
        d[i]=0x7fffffff;
    }
    cin >> start >> end;
    d[start]=0;
    pq.push({0,start});
    di();
    cout << d[end];
    return 0;
}