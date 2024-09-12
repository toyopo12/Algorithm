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
    for(int i = 0; i < n - 1; i++){
        int x,y,z;
        cin >> x >> y >> z;
        v[x].push_back({y,z});
        v[y].push_back({x,z});
    }
    dfs(1,0);
    memset(visited,0,sizeof(visited));
    maxx = 0;
    dfs(maxxnum,0);
    cout << maxx;
    return 0;
}