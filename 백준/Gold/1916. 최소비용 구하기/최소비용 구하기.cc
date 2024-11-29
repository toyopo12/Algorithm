#include <iostream>
#include <queue>

using namespace std;

#define INF 0x7fffffff

vector<pair<int, int>> bus[1010];
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
int d[1010];

void dijkstra() {
    while(!pq.empty()) {
        auto [a, b] = pq.top();
        pq.pop();
        if(a != d[b]) continue;
        for(int i = 0; i < bus[b].size(); i++) {
            auto [x, y] = bus[b][i];
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
    int start, end, N, M; cin >> N >> M;
    for(int i = 1; i <= N; i++) d[i] = INF;
    for(int i = 0; i < M; i++) {
        int from, to, cost; cin >> from >> to >> cost;
        bus[from].push_back({cost, to});
    }
    cin >> start >> end;
    d[start] = 0;
    pq.push({0, start});
    dijkstra();
    cout << d[end];
    return 0;
}