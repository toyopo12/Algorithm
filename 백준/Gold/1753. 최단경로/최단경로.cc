#include <iostream>
#include <queue>
#include <vector>

using namespace std;

vector<pair<int, int>> graph[20020];
int d[20020];
int N, E, K;

void dijkstra() {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    for(int i = 1; i <= N; i++) d[i] = 3000030;
    d[K] = 0;
    pq.push({0, K});
    while(!pq.empty()) {
        auto [a, b] = pq.top();
        pq.pop();
        if(a != d[b]) continue;
        for(int i = 0; i < graph[b].size(); i++) {
            auto [x, y] = graph[b][i];
            if(d[y] > a + x) {
                d[y] = a + x;
                pq.push({d[y], y});
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> N >> E >> K;
    for(int i = 0; i < E; i++) {
        int u, v, w; cin >> u >> v >> w;
        graph[u].push_back({w, v});
    }
    dijkstra();
    for(int i = 1; i <= N; i++) {
        if(d[i] >= 3000030) cout << "INF\n";
        else cout << d[i] << '\n';
    }
    return 0;
}