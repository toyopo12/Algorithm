#include <iostream>
#include <vector>

using namespace std;

bool visited[101];

vector<int> graph[101];

int sum;

void DFS(int n)
{
    for(int i=0;i<graph[n].size();i++)
    {
        if(!visited[graph[n][i]])
        {
            visited[graph[n][i]]=true;
            DFS(graph[n][i]);
            sum++;
        }
    }
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin >> n >> m;
    while(m--)
    {
        int a,b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    DFS(1);
    if(sum==0)
    {
        cout << "0";
    }
    else
    {
        cout << sum-1;
    }
    return 0;
}