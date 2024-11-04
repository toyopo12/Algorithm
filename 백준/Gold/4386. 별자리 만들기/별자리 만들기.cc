#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<pair<double, double>> pv;
vector<pair<double, pair<int, int>>> ppv;
int parent[110];
double result;

int find(int x){
    if(parent[x] == x) return x;
    else return parent[x] = find(parent[x]);
}
bool merge(int x, int y){
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
    cin.tie(nullptr);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        double a, b;
        cin >> a >> b;
        pv.push_back({a, b});
        parent[i] = i;
    }
    for(int i = 0; i < n; i++){
        auto [x, y] = pv[i];
        for(int j = 0; j < n; j++) if(i < j) ppv.push_back({sqrt(pow(pv[j].first - x, 2) + pow(pv[j].second - y, 2)), {i, j}});
    }
    sort(ppv.begin(), ppv.end());
    for(int i = 0; i < ppv.size(); i++) if(!merge(ppv[i].second.first, ppv[i].second.second)) result += ppv[i].first;
    cout << result;
    return 0;
}