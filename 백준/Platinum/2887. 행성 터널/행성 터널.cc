#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<pair<int, int>> xv, yv, zv;
vector<pair<int, pair<int, int>>> pv;
int parent[100010];
int result;

int find(int x){
    if(parent[x] == x) return x;
    else return parent[x] = find(parent[x]);
}
bool same(int x, int y){
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
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x, y, z;
        cin >> x >> y >> z;
        xv.push_back({x, i});
        yv.push_back({y, i});
        zv.push_back({z, i});
        parent[i] = i;
    }
    sort(xv.begin(), xv.end());
    sort(yv.begin(), yv.end());
    sort(zv.begin(), zv.end());
    for(int i = 0; i < n - 1; i++){
        pv.push_back({xv[i + 1].first - xv[i].first, {xv[i].second, xv[i + 1].second}});
        pv.push_back({yv[i + 1].first - yv[i].first, {yv[i].second, yv[i + 1].second}});
        pv.push_back({zv[i + 1].first - zv[i].first, {zv[i].second, zv[i + 1].second}});
    }
    sort(pv.begin(), pv.end());
    for(int i = 0; i < pv.size(); i++){
        auto [a, b] = pv[i].second;
        if(!same(a, b)) result += pv[i].first;
    }
    cout << result;
    return 0;
}