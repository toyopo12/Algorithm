#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int parent[200020];
int result;

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
    while(1){
        result = 0;
        vector<pair<int, pair<int, int>>> pv;
        int m, n;
        cin >> m >> n;
        if(m == 0 && n == 0) break;
        for(int i = 0; i < m; i++) parent[i] = i;
        for(int i = 0; i < n; i++){
            int x, y, z;
            cin >> x >> y >> z;
            pv.push_back({z, {x, y}});
            result += z;
        }
        sort(pv.begin(), pv.end());
        for(int i = 0; i < pv.size(); i++){
            if(!uni(pv[i].second.first, pv[i].second.second)){
                result -= pv[i].first;
            }
        }
        cout << result << '\n';
    }
    return 0;
}