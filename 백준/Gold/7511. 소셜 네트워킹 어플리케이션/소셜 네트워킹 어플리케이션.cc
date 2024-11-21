#include <iostream>

using namespace std;

int parent[100010];

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
    int t; cin >> t;
    for(int i = 1; i <= t; i++) {
        int n, k, m; cin >> n >> k;
        for(int j = 0; j < n; j++) parent[j] = j;
        for(int j = 0; j < k; j++) {
            int a, b; cin >> a >> b;
            uni(a, b);
        }
        cin >> m;
        cout << "Scenario " << i << ":\n";
        for(int j = 0; j < m; j++) {
            int u, v; cin >> u >> v;
            if(find(u) == find(v)) cout << "1\n";
            else cout << "0\n";
        }
        cout << '\n';
    }
    return 0;
}