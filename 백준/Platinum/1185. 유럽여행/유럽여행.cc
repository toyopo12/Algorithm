#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<pair<int, pair<int, int>>> pv;
int parent[10010];
int city[10010];
int result, mini = 0x7fffffff;

int find(int x){
    if(parent[x] == x) return x;
    else return parent[x] = find(parent[x]);
}
bool uni(int x, int y){
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
    int n, p;
    cin >> n >> p;
    for(int i = 1; i <= n; i++){
        cin >> city[i];
        parent[i] = i;
        if(mini > city[i]) mini = city[i];
    }
    for(int i = 0; i < p; i++){
        int s, e, l;
        cin >> s >> e >> l;
        pv.push_back({2 * l + city[s] + city[e], {s, e}});
    }
    sort(pv.begin(), pv.end());
    for(int i = 0; i < pv.size(); i++){
        auto [a, b] = pv[i].second;
        if(!uni(a, b)) result += pv[i].first;
    }
    cout << result + mini;
    return 0;
}