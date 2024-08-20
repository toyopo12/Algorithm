#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

bool visited[100010];
vector<int> graph[100010];
int hi[100010];
int good=0;

void bfs(int n)
{
    queue<int> q;
    q.push(n);
    visited[n]=1;
    good++;
    hi[n]=good;
    while(!q.empty())
    {
        int x=q.front();
        q.pop();
        for(int i=0;i<graph[x].size();i++)
        {
            int y=graph[x][i];
            if(!visited[y])
            {
                good++;
                hi[y]=good;
                q.push(y);
                visited[y]=1;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m,r;
    cin >> n >> m >> r;
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    for(int i=1;i<=n;i++)
    {
        sort(graph[i].begin(),graph[i].end(),greater<>());
    }
    bfs(r);
    for(int i=1;i<=n;i++)
    {
        cout << hi[i] << '\n';
    }
    return 0;
}