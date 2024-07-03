#include <iostream>
#include <vector>
#include <queue>

using namespace std;

bool visited1[1010];
bool visited2[1010];


vector<int> graph[1010];

void DFS(int n)
{
    for(int i=0;i<graph[n].size();i++)
    {
        if(!visited1[graph[n][i]])
        {
            cout << graph[n][i] << " ";
            visited1[graph[n][i]]=true;
            DFS(graph[n][i]);
        }
    }
}

void BFS(int n)
{
    queue<int> q;
    q.push(n);
    visited2[n]=true;
    while(!q.empty())
    {
        int location=q.front();
        cout << q.front() << " ";
        q.pop();
        for(int i=0;i<graph[location].size();i++)
        {
            if(!visited2[graph[location][i]])
            {
                visited2[graph[location][i]]=true;
                q.push(graph[location][i]);
            }
        }
    }
}

int main()
{
    int n,m,v;
    cin >> n >> m >> v;
    while(m--)
    {
        int a,b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    for(int i=1;i<=n;i++)
    {
        sort(graph[i].begin(),graph[i].end());
    }
    cout << v << " ";
    visited1[v]=true;
    DFS(v);
    cout << '\n';
    BFS(v);
    return 0;
}