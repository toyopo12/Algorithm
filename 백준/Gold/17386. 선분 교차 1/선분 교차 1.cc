#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long
#define pii pair<ll, ll>

using namespace std;

int ccw(pii p1, pii p2, pii p3) {
    long long s = p1.first * p2.second + p2.first * p3.second + p3.first * p1.second;
    s -= p1.second * p2.first + p2.second * p3.first + p3.second * p1.first;
    if(s > 0) return 1;
    else if(s == 0) return 0;
    else return -1;
}

bool intersect(pair<pii, pii> l1, pair<pii, pii> l2) {
    auto [p1, p2] = l1;
    auto [p3, p4] = l2;
    int p1p2 = ccw(p1, p2, p3) * ccw(p1, p2, p4);
    int p3p4 = ccw(p3, p4, p1) * ccw(p3, p4, p2);
    if(p1p2 == 0 && p3p4 == 0) {
        if(p1 > p2) swap(p1, p2);
        if(p3 > p4) swap(p3, p4);
        return p3 <= p2 && p1 <= p4;
    }
    return p1p2 <= 0 && p3p4 <= 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    vector<pair<pii, pii>> l;
    for(int i = 0; i < 2; i++) {
        int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
        l.push_back({{x1, y1}, {x2, y2}});
    }
    for(int i = 0; i < l.size(); i++) {
        for(int j = i + 1; j < l.size(); j++) {
            cout << intersect(l[i], l[j]);
        }
    }
    return 0;
}