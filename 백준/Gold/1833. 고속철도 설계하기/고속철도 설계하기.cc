#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<pair<int, pair<int, int>>> pv;
vector<pair<int, int>> v;
int parent[10010];
int counting;
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
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) parent[i] = i;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int x;
            cin >> x;
            if(i < j){
                if(x < 0){
                    result += -x;
                    uni(i, j);
                }
                else pv.push_back({x, {i, j}});
            }
        }
    }
    sort(pv.begin(), pv.end());
    for(int i = 0; i < pv.size(); i++){
        if(!uni(pv[i].second.first, pv[i].second.second)){
            result += pv[i].first;
            counting++;
            v.push_back({pv[i].second.first, pv[i].second.second});
        }
    }
    cout << result << " " << counting << '\n';
    for(int i = 0; i < v.size(); i++) cout << v[i].first + 1 << " " << v[i].second + 1<< '\n';
    return 0;
}