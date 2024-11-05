#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

vector<pair<int, pair<int, int>>> pv;
vector<pair<int, int>> v[1010];
int parent[1010];
bool visited[1010];
long long result;
int high;

void dfs(int now, int maxcost, int target){
    if(now == target){
        high = maxcost;
        return;
    }
    visited[now] = 1;
    for(int i = 0; i < v[now].size(); i++){
        if(!visited[v[now][i].first]) dfs(v[now][i].first, max(maxcost, v[now][i].second), target);
    }
}
int find(int x){
    if(parent[x] == x) return x;
    else return parent[x] = find(parent[x]);
}
bool good(int x, int y){
    x = find(x);
    y = find(y);
    if(x == y) return true;
    parent[x] = y;
    return false;
}
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, m, q;
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int a, b, c;
        cin >> a >> b >> c;
        pv.push_back({c, {min(a, b), max(a, b)}});
    }
    sort(pv.begin(), pv.end());
    for(int i = 1; i <= n; i++) parent[i] = i;
    for(int i = 0; i < pv.size(); i++){
        auto [a, b] = pv[i].second;
        if(!good(a, b)){
            result += pv[i].first;
            v[a].push_back({b, pv[i].first});
            v[b].push_back({a, pv[i].first});
        }
    }
    cin >> q;
    for(int i = 0; i < q; i++){
        int x, y;
        cin >> x >> y;
        memset(visited, 0, sizeof(visited));
        dfs(x, 0, y);
        cout << result - high << '\n';
    }
    return 0;
}