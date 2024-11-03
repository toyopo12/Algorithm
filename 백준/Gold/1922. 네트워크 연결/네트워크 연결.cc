#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<pair<int, pair<int, int>>> ppv;
int parent[1010];
int result;

int find(int x)
{
    if(parent[x] == x) return x;
    else return parent[x] = find(parent[x]);
}

void uni(int x, int y)
{
    x = find(x);
    y = find(y);
    parent[y] = x;
}

bool sameparent(int x, int y)
{
    x = find(x);
    y = find(y);
    if(x == y) return true;
    else return false;
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int a, b, c;
        cin >> a >> b >> c;
        ppv.push_back({c, {a, b}});
    }
    sort(ppv.begin(), ppv.end());
    for(int i = 1; i <= n; i++) parent[i] = i;
    for(int i = 0; i < m; i++){
        if(!sameparent(ppv[i].second.first, ppv[i].second.second)){
            uni(ppv[i].second.first, ppv[i].second.second);
            result += ppv[i].first;
        }
    }
    cout << result;
    return 0;
}