#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

vector<pair<int, pair<int, int>>> pv;
int parent[55];
int counting;
long long result;

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
    for(int i = 0; i < n; i++){
        string x;
        cin >> x;
        for(int j = 0; j < n; j++){
            if('a' <= x[j] && x[j] <= 'z'){
                pv.push_back({x[j] - 'a' + 1, {i, j}});
                pv.push_back({x[j] - 'a' + 1, {j, i}});
                result += x[j] - 'a' + 1;
            }
            else if('A' <= x[j] && x[j] <= 'Z'){
                pv.push_back({x[j] - 'A' + 27, {i, j}});
                pv.push_back({x[j] - 'A' + 27, {j, i}});
                result += x[j] - 'A' + 27;
            }
        }
        parent[i] = i;
    }
    sort(pv.begin(), pv.end());
    for(int i = 0; i < pv.size(); i++){
        if(!uni(pv[i].second.first, pv[i].second.second)){
            result -= pv[i].first;
            counting++;
        }
    }
    if(counting != n - 1) cout << "-1";
    else cout << result;
    return 0;
}