#include <iostream>

using namespace std;

int parent[220];
bool check = true;

int find(int x) {
    if(x == parent[x]) return x;
    else return parent[x] = find(parent[x]);
}

void uni(int x, int y) {
    x = find(x);
    y = find(y);
    if(x != y) parent[y] = x;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, m, now; cin >> n >> m;
    for(int i = 1; i <= n; i++) parent[i] = i;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            int x; cin >> x;
            if(x == 1) uni(i, j);
        }
    }
    cin >> now;
    for(int i = 1; i < m; i++) {
        int x; cin >> x;
        if(find(x) != find(now)) check = false;
        now = x;
    }
    if(check) cout << "YES";
    else cout << "NO";
    return 0;
}