#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <set>
#include <map>
using namespace std;

/*
 * 풀이 흐름
 1. bfs로 모든 사람과 탈출구의 거리 쌍을 만든다
 2. 이분 탐색으로 가능 시간 탐색수 줄이기
 3. dinic 알고리즘으로 특정 시간에서 가능한지 살펴보기
 */

#define INF 1000000009

char board[15][15];
vector<pair<int, int>> pv[1600];
vector<pair<int, int>> person_list;
vector<pair<int, int>> exit_list;
map<pair<int, int>, int> exit_index_map;
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

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
        fill(next_v.begin(), next_v.end(), 0);
    }
    int dfs(int u, int max_flow) {
        if(u == T) return max_flow;
        for(int &i = next_v[u]; i < edges[u].size(); i++) {
            int v = edges[u][i].v, cap = edges[u][i].cap;
            if(level[u] + 1 == level[v] && cap > 0) {
                int flow = dfs(v, min(max_flow, cap));
                if(flow > 0) {
                    edges[u][i].cap -= flow;
                    edges[v][edges[u][i].ref].cap += flow;
                    return flow;
                }
            }
        }
        return 0;
    }
};

void bfs(int n, int m) {
    int check[15][15] = {0};
    queue<pair<int, int>> pq;
    pq.push({n, m});

    while(!pq.empty()) {
        auto [x, y] = pq.front();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (check[nx][ny] != 0) continue;
            if (board[nx][ny] == 'D') {
                check[nx][ny] = check[x][y] + 1;
                pv[100 * n + m].push_back({100 * nx + ny, check[nx][ny]});
            }
            else if (board[nx][ny] == '.') {
                check[nx][ny] = check[x][y] + 1;
                pq.push({nx, ny});
            }
        }

        pq.pop();
    }
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M; cin >> N >> M;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            cin >> board[i][j];
            if (board[i][j] == '.') person_list.push_back({i, j});
            if (board[i][j] == 'D') {
                exit_index_map[{i, j}] = exit_list.size();
                exit_list.push_back({i, j});
            }
        }
    }

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            if (board[i][j] == '.') {
                bfs(i, j);
            }
        }
    }

    // 이분 탐색으로 최적화
    int start = 0;
    int end = 200;
    while(start < end - 1) {
        // dinic 이분매칭 ㄱㄱ
        Dinic network(15000, 0, 5001);
        int mid = (start + end) / 2;

        for (auto [i, j] : person_list) {
            network.addEdge(0, 100 * i + j, 1, false);
        }

        for (int k = 0; k < exit_list.size(); k++) {
            for (int t = 1; t <= mid; t++) {
                network.addEdge(10000 + 100 * k + t, 5001, 1, false);
            }
        }

        for (auto [i, j] : person_list) {
            // 사람에서부터 1 ~ 시간까지의 같은 탈출구로부터 매칭을 다 해줌.
            for (auto [exit, dist] : pv[100 * i + j]) {
                int x = exit / 100, y = exit % 100;
                int k = exit_index_map[{x, y}];

                for (int t = dist; t <= mid; t++) {
                    network.addEdge(100 * i + j, 10000 + 100 * k + t, 1, false);
                }
            }
        }

        int ans = 0;
        while(network.bfs()) {
            network.reset_next_v();
            while(true) {
                int flow = network.dfs(0, INF);
                if (!flow) break;
                ans += flow;
            }
        }

        if (ans == person_list.size()) end = mid;
        else start = mid;
    }

    if (end == 200) cout << "impossible";
    else cout << end;

    return 0;
}