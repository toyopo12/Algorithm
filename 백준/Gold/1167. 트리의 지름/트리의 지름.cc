#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

vector<pair<int,int>> v[100010];
bool visited[100010];
int maxx, maxxnum;

void dfs(int n,int walk){
    visited[n] = 1;
    for(int i = 0; i < v[n].size(); i++){
        if(!visited[v[n][i].first]){
            if(maxx < walk + v[n][i].second){
                maxx = walk + v[n][i].second;
                maxxnum = v[n][i].first;
            }
            dfs(v[n][i].first, walk + v[n][i].second);
        }
    }
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int trash;
        cin >> trash;
        while(1){
            int x,y;
            cin >> x;
            if(x == -1) break;
            cin >> y;
            v[trash].push_back({x,y});
            v[x].push_back({trash,y});
        }
    }
    dfs(1,0);
    memset(visited,0,sizeof(visited));
    maxx = 0;
    dfs(maxxnum,0);
    cout << maxx;
    return 0;
}