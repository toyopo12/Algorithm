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

void intersect_point(pll p1, pll p2, pll p3, pll p4) {
    long double p, px, py;
    p = (p1.first - p2.first) * (p3.second - p4.second) - (p1.second - p2.second) * (p3.first - p4.first);
    px = (p1.first * p2.second - p1.second * p2.first) * (p3.first - p4.first) - (p3.first * p4.second - p3.second * p4.first) * (p1.first - p2.first);
    py = (p1.first * p2.second - p1.second * p2.first) * (p3.second - p4.second) - (p3.first * p4.second - p3.second * p4.first) * (p1.second - p2.second);
    // 평행할 때
    if (p == 0) {
        // 교점이 한개
        if(p2 == p3 && p1 <= p3) cout << p2.first << " " << p2.second;
        else if(p1 == p4 && p3 <= p1) cout << p1.first << " " << p1.second;
    }
    // 그냥 교차
    else {
        long double x = px / p;
        long double y = py / p;
        cout << x << " " << y;
    }
}

void intersect(pll p1, pll p2, pll p3, pll p4) {
    int p1p2 = ccw(p1, p2, p3) * ccw(p1, p2, p4);
    int p3p4 = ccw(p3, p4, p1) * ccw(p3, p4, p2);
    // 이쁘게 정리
    if(p1 > p2) swap(p1, p2);
    if(p3 > p4) swap(p3, p4);
    // 만나는 점 찾기
    if(p1p2 == 0 && p3p4 == 0) {
        if(p3 <= p2 && p1 <= p4) {
            cout << "1\n";
            intersect_point(p1, p2, p3, p4);
        }
        else cout << "0";
    }
    // 교차할 때
    else if(p1p2 <= 0 && p3p4 <= 0) {
        cout << "1\n";
        intersect_point(p1, p2, p3, p4);
    }
    else cout << "0";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout.setf(ios::fixed);
    cout.precision(9);
    vector<pll> pv;
    for(int i = 0; i < 4; i++) {
        ll x, y; cin >> x >> y;
        pv.push_back({x, y});
    }
    intersect(pv[0], pv[1], pv[2], pv[3]);
    return 0;
}