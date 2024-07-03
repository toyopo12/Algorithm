#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <string.h>

using namespace std;

bool visited1[101];
bool visited2[101];
int friends[101];

vector<int> graph[101];

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
    queue<pair<int,int>> q;
    q.push({n,0});
    visited2[n]=true;
    while(!q.empty())
    {
        int location=q.front().first;
        int count=q.front().second;
        q.pop();
        for(int i=0;i<graph[location].size();i++)
        {
            if(!visited2[graph[location][i]])
            {
                visited2[graph[location][i]]=true;
                friends[n]+=count+1;
                q.push({graph[location][i],count+1});
            }
        }
    }
}

int main()
{
    int n,m;
    int min=10000;
    int good=0;
    cin >> n >> m;
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
    for(int i=1;i<=n;i++)
    {
        memset(visited2, 0, sizeof(visited2));
        BFS(i);
        if(min>friends[i])
        {
            min=friends[i];
            good=i;
        }
    }
    cout << good;
    return 0;
}