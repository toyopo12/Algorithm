#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<pair<int, pair<int, int>>> ppv;
int parent[330];
int result;

int find(int x){
    if(parent[x] == x) return x;
    else return parent[x] = find(parent[x]);
}
bool good(int x, int y){
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
    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;
        ppv.push_back({x, {0, i}});
        parent[i] = i;
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            int x;
            cin >> x;
            if(i < j) ppv.push_back({x, {i, j}});
        }
    }
    sort(ppv.begin(), ppv.end());
    for(int i = 0; i < ppv.size(); i++) if(!good(ppv[i].second.first, ppv[i].second.second)) result += ppv[i].first;
    cout << result;
    return 0;
}