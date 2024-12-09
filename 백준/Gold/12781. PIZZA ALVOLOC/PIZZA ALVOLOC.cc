#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long
#define pll pair<ll, ll>

using namespace std;

int ccw(pll p1, pll p2, pll p3) {
    ll s = p1.first * p2.second + p2.first * p3.second + p3.first * p1.second;
    s -= p1.second * p2.first + p2.second * p3.first + p3.second * p1.first;
    if(s > 0) return 1;
    else if(s == 0) return 0;
    else return -1;
}

int intersect(pll p1, pll p2, pll p3, pll p4) {
    int p1p2 = ccw(p1, p2, p3) * ccw(p1, p2, p4);
    int p3p4 = ccw(p3, p4, p1) * ccw(p3, p4, p2);
    if(p1p2 < 0 && p3p4 < 0)
        return 1;
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout.setf(ios::fixed);
    vector<pll> pv;
    for(int i = 0; i < 4; i++) {
        ll x, y; cin >> x >> y;
        pv.push_back({x, y});
    }
    cout << intersect(pv[0], pv[1], pv[2], pv[3]);
    return 0;
}