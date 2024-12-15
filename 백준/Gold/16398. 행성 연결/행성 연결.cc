#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<pair<int, pair<int, int>>> pv;
int parent[1010];
long long result;

int find(int x) {
    if(x == parent[x]) return x;
    else return parent[x] = find(parent[x]);
}

bool uni(int x, int y) {
    x = find(x);
    y = find(y);
    if(x == y) return true;
    parent[y] = x;
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int N; cin >> N;
    for(int i = 0; i < N; i++) parent[i] = i;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            int x; cin >> x;
            pv.push_back({x, {i, j}});
        }
    }
    sort(pv.begin(), pv.end());
    for(int i = 0; i < pv.size(); i++) {
        if(!uni(pv[i].second.first, pv[i].second.second)) {
            result += pv[i].first;
        }
    }
    cout << result;
    return 0;
}