#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

#define ll long long
#define pii pair<ll, ll>

vector<pair<pii, pii>> l;
int parent[3030];
map<int, int> m;

int find(int x) {
    if(x == parent[x]) return x;
    else return parent[x] = find(parent[x]);
}

void uni(int x, int y) {
    x = find(x);
    y = find(y);
    if(x != y) parent[y] = x;
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
    for(int i = 0; i < N; i++) parent[i] = i;
    for(int i = 0; i < N; i++) {
        int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
        l.push_back({{x1, y1}, {x2, y2}});
    }
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < i; j++) {
            if(intersect(l[i], l[j])) {
                uni(i, j);
            }
        }
    }
    int big = 0;
    for(int i = 0; i < N; i++) m[find(parent[i])]++;
    for(auto i = m.begin(); i != m.end(); i++) if(big < m[i->first]) big = m[i->first];
    cout << m.size() << '\n' << big;
    return 0;
}