#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n, m;
int indegree[32032];
vector<int> graph[32032];
queue<int> q;

void toyopo()
{
    for(int i = 1; i <= n; i++) if(indegree[i] == 0) q.push(i);
    while(!q.empty()){
        int cur = q.front();
        q.pop();
        cout << cur << " ";
        for(int i = 0; i < graph[cur].size(); i++){
            int next = graph[cur][i];
            indegree[next]--;
            if(indegree[next] == 0) q.push(next);
        }
    }
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cin.tie(nullptr);
    cin >> n >> m;
    int a, b;
    for(int i = 0; i < m; i++){
        cin >> a >> b;
        graph[a].emplace_back(b);
        indegree[b]++;
    }
    toyopo();
    return 0;
}