#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>
#include <cstring>
#include <set>
#include <map>
#include <stack>

using namespace std;

#define INF 1000000009

struct Edge {
    int v, cap, ref;
    Edge(int v, int cap, int ref) : v(v), cap(cap), ref(ref) {}
};

class Dinic {
    int S, T;
    vector<vector<Edge>> edges;
    vector<int> level, next_v;

public:
    Dinic(int MAX_V, int S, int T) : S(S), T(T) {
        edges.resize(MAX_V);
        level.resize(MAX_V);
        next_v.resize(MAX_V);
    }
    void addEdge(int u, int v, int cap, bool inv) {
        edges[u].emplace_back(v, cap, (int)edges[v].size());
        if(inv) edges[v].emplace_back(u, cap, (int)edges[u].size() - 1);
        else edges[v].emplace_back(u, 0, (int)edges[u].size() - 1);
    }
    bool bfs() { // 레벨 그래프 생성하기
        fill(level.begin(), level.end(), -1);
        queue<int> q;
        level[S] = 0;
        q.push(S);
        while(!q.empty()) {
            int u = q.front();
            q.pop();
            for(auto edge : edges[u]) {
                int v = edge.v, cap = edge.cap;
                if(level[v] == -1 && cap > 0) {
                    level[v] = level[u] + 1;
                    q.push(v);
                }
            }
        }
        return level[T] != -1; // 레벨 그래프 생성 가능한 경우 true 리턴
    }
    void reset_next_v() {
        fill(next_v.begin(), next_v.end(), 0); // 시작점
    }
    int dfs(int u, int max_flow) {
        if(u == T) return max_flow;
        for(int &i = next_v[u]; i < edges[u].size(); i++) {
            int v = edges[u][i].v, cap = edges[u][i].cap;
            if(level[v] == -1 || cap <= 0) continue;
            if(level[u] + 1 == level[v]) {
                int flow = dfs(v, min(max_flow, cap));
                if(flow > 0) {
                    edges[u][i].cap -= flow;
                    edges[v][edges[u][i].ref].cap += flow; // 와 신기
                    return flow;
                }
            }
        }
        return 0;
    }
};

int N, M, K1, K2;
Dinic network(1010, 0, 1000);
Dinic network2(1010, 0, 1000);

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> N >> M >> K1 >> K2;
    for (int i = 1; i <= N; i++) network.addEdge(0, i, 1, false);
    for (int i = 1; i <= M; i++) network.addEdge(i + 300, 1000, 1, false);
    for (int i = 0; i < K1; i++) {
        int a, b; cin >> a >> b;
        network.addEdge(a, b + 300, 1, false);
    }
    for (int i = 1; i <= N; i++) network2.addEdge(0, i, 1, false);
    for (int i = 1; i <= M; i++) network2.addEdge(i + 300, 1000, 1, false);
    for (int i = 0; i < K2; i++) {
        int a, b; cin >> a >> b;
        network2.addEdge(a, b + 300, 1, false);
    }
    int ans = 0;
    while(network.bfs()) {
        network.reset_next_v();
        while(true) {
            int flow = network.dfs(0, INF);
            if(!flow) break;
            ans += flow;
        }
    }
    int ans2 = 0;
    while(network2.bfs()) {
        network2.reset_next_v();
        while(true) {
            int flow = network2.dfs(0, INF);
            if(!flow) break;
            ans2 += flow;
        }
    }
    if(ans >= ans2) cout << "그만 알아보자";
    else cout << "네 다음 힐딱이";
    return 0;
}