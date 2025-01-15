// 코드 참 안 이쁘네
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> v[505];
bool visited[505];
int n, m, result;
queue<int> q;

void bfs() {
    int good = q.size();
    for(int i = 0; i < good; i++) {
        for(int j = 0; j < v[q.front()].size(); j++) {
            if(visited[v[q.front()][j]] == 0) {
                q.push(v[q.front()][j]);
                visited[v[q.front()][j]] = 1;
                result++;
            }
        }
        q.pop();
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> n >> m;
    for(int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    q.push(1);
    visited[1] = 1;
    for(int i = 0; i < 2; i++) bfs();
    cout << result;
    return 0;
}