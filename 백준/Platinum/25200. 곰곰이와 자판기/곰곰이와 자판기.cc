#include <iostream>

using namespace std;

pair<int, int> p[300030];
int parent[300030];
int N, M;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> N >> M;
    for(int i = 0; i < M; i++) {
        int u, v; cin >> u >> v;
        p[i] = {u, v};
    }
    for(int i = 1; i <= N; i++) parent[i] = i;
    for(int i = M - 1; i >= 0; i--) parent[p[i].first] = parent[p[i].second];
    for(int i = 1; i <= N; i++) cout << parent[i] << " ";
    return 0;
}