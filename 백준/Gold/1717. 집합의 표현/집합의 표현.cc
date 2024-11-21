#include <iostream>

using namespace std;

int parent[1000010];

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
    for(int i = 0; i < m; i++) {
        int check, a, b; cin >> check >> a >> b;
        if(check) {
            if(find(a) == find(b)) cout << "YES\n";
            else cout << "NO\n";
        }
        else uni(a, b);
    }
    return 0;
}