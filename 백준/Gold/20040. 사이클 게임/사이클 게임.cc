#include <iostream>

using namespace std;

int parent[500010];

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
    int n, m; cin >> n >> m;
    for(int i = 1; i <= n; i++) parent[i] = i;
    for(int i = 1; i <= m; i++) {
        int a, b; cin >> a >> b;
        if(find(a) == find(b)) {
            cout << i;
            return 0;
        }
        uni(a, b);
    }
    cout << "0";
    return 0;
}