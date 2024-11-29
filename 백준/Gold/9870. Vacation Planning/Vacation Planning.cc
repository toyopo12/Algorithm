#include <iostream>
#include <algorithm>

using namespace std;

long long graph[202][202];
long long N, M, K, Q, travelcount, travelcost;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> N >> M >> K >> Q;
    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= N; j++) {
            if(i != j) graph[i][j] = 0x7fffffff;
        }
    }
    for(int i = 0; i < M; i++) {
        long long u_i, v_i, d_i; cin >> u_i >> v_i >> d_i;
        graph[u_i][v_i] = min(graph[u_i][v_i], d_i);
    }
    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= N; j++) {
            for(int k = 1; k <= N; k++) {
                graph[j][k] = min(graph[j][k], graph[j][i] + graph[i][k]);
            }
        }
    }
    for(int i = 0; i < Q; i++) {
        int a_i, b_i; cin >> a_i >> b_i;
        bool tmpcount = false;
        long long tmpcost = 0x7fffffff;
        for(int j = 1; j <= K; j++) {
            if(graph[a_i][j] + graph[j][b_i] < tmpcost) {
                tmpcount = true;
                tmpcost = graph[a_i][j] + graph[j][b_i];
            }
        }
        if(tmpcount) {
            travelcount++;
            travelcost += tmpcost;
        }
    }
    cout << travelcount << '\n' << travelcost;
    return 0;
}