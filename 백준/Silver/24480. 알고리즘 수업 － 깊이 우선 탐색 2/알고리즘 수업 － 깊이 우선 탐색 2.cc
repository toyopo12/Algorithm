#include <iostream>
#include <vector>

using namespace std;

bool visited[100010];
vector<int> graph[100010];
int good[100010];
int check=0;

void DFS(int n)
{
    visited[n]=1;
    check++;
    good[n]=check;
    for(int i=0;i<graph[n].size();i++)
    {
        if(visited[graph[n][i]]==0)
        {
            DFS(graph[n][i]);
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
    while(m--)
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
    DFS(r);
    for(int i=1;i<=n;i++)
    {
        cout << good[i] << '\n';
    }
    return 0;
}