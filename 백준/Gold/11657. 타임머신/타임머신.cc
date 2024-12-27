// 벨만포드
#include <iostream>
#include <vector>

using namespace std;

long long dist[505];
vector<pair<pair<int, int>, int>> graph; // {{start, end}, cost}
int N, M;

void bf(int start){
    dist[start] = 0;
    for(int i = 1; i < N; i++) {
        for(int j = 0; j < graph.size(); j++) {
            int start = graph[j].first.first;
            int end = graph[j].first.second;
            int cost = graph[j].second;
            if(dist[start] == 0x7fffffff) continue;
            if(dist[end] > dist[start] + cost) dist[end] = dist[start] + cost;
        }
    }
    for(int i = 0; i < graph.size(); i++) {
        int start = graph[i].first.first;
        int end = graph[i].first.second;
        int cost = graph[i].second;
        if(dist[start] == 0x7fffffff) continue;
        if(dist[end] > dist[start] + cost) {
            cout << "-1\n";
            return;
        }
    }
    for(int i = 2; i <= N; i++) {
        if(dist[i] == 0x7fffffff) cout << "-1\n";
        else cout << dist[i] << '\n';
    }
}

int main() {
    cin >> N >> M;
    for(int i = 1; i <= N; i++) dist[i] = 0x7fffffff;
    for(int i = 0; i < M; i++) {
        int start, end, cost; cin >> start >> end >> cost;
        graph.push_back({{start, end}, cost});
    }
    bf(1);
    return 0;
}