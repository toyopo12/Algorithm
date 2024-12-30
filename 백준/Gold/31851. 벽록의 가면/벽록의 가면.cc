#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long
#define pii pair<ll, ll>

using namespace std;

bool cmp(pii a, pii b) {
    if(a.first == b.first) return a.second < b.second;
    return a.first < b.first;
}

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
    int N; cin >> N;
    long long result = 0;
    vector<pii> l;
    for(int i = 0; i < N; i++) {
        int x, y; cin >> x >> y;
        l.push_back({x, y});
    }
    for(int i = 0; i < N; i++) {
        for(int j = i + 1; j < N; j++) {
            for(int a = j + 1; a < N; a++) {
                for(int b = a + 1; b < N; b++) {
                    // 대각선 만들기
                    vector<pii> good;
                    good.push_back(l[i]);
                    good.push_back(l[j]);
                    good.push_back(l[a]);
                    good.push_back(l[b]);
                    sort(good.begin(), good.end(), cmp);
                    if(intersect({good[1], good[2]}, {good[0], good[3]}) == 1)
                        result++;
                    if(intersect({good[0], good[2]}, {good[1], good[3]}) == 1)
                        result++;
                }
            }
        }
    }
    cout << result;
    return 0;
}