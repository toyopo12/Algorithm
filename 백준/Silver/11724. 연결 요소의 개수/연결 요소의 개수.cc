#include <iostream>
#include <vector>

using namespace std;

vector<int> graph[1010];
bool visited[1010];
int cc;
void search(int x){
    for(int i = 0; i < graph[x].size(); i++){
        if(visited[graph[x][i]] == 0){
            visited[graph[x][i]] = 1;
            search(graph[x][i]);
        }
    }
}
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    for(int i = 1; i <= n; i++){
        if(visited[i] == 0){
            cc++;
            search(i);
        }
    }
    cout << cc;
    return 0;
}