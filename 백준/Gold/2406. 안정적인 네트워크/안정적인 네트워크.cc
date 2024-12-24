#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<pair<int, pair<int, int>>> ppv;
vector<pair<int, int>> pv;
int chain[1010][1010];
int parent[1010];
long long result, recount;

int find(int x) {
    if(parent[x] == x) return x;
    else return parent[x] = find(parent[x]);
}

bool uni(int x, int y) {
    x = find(x);
    y = find(y);
    if(x == y) return true;
    parent[y] = x;
    return false;
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, m; cin >> n >> m;
    for(int i = 1; i <= n; i++)
        parent[i] = i;
    for(int i = 0; i < m; i++) {
         int x, y; cin >> x >> y;
         uni(x, y);
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++)
            cin >> chain[i][j];
    }
    for(int i = 2; i <= n; i++) {
        for(int j = 2; j <= n; j++) {
            if(i < j)
                ppv.push_back({chain[i][j], {i, j}});
        }
    }
    sort(ppv.begin(), ppv.end());
    for(int i = 0; i < ppv.size(); i++) {
        if(!uni(ppv[i].second.first, ppv[i].second.second)){
            uni(ppv[i].second.first, ppv[i].second.second);
            result += ppv[i].first;
            recount++;
            pv.push_back({ppv[i].second.first, ppv[i].second.second});
        }
    }
    cout << result << " " << recount << '\n';
    for(int i = 0; i < pv.size(); i++)
        cout << pv[i].first << " " << pv[i].second << '\n';
    return 0;
}