#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
vector<pair<int, int>> pv;
int result[100010];

bool cmp(pair<int, int> a, pair<int, int> b) {
    if(a.first == b.first) return a.second > b.second;
    else return a.first < b.first;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> n;
    for(int i = 1; i <= n; i++) {
        int x; cin >> x;
        pv.push_back({x, i});
    }
    sort(pv.begin(), pv.end(), cmp);
    for(int i = 0; i < pv.size(); i++) result[pv[i].second] = i + 1;
    for(int i = 1; i <= n; i++) cout << result[i] << " ";
    return 0;
}