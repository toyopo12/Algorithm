#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int board[110][110];
bool visited[110][110];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
int N;

int bfs(int a) {
    queue<pair<int, int>> pq;
    for(int i = 0; i <= 200 - a; i++) {
        for(int j = 1; j <= N; j++) {
            for(int k = 1; k <= N; k++) {
                if(i <= board[j][k] && board[j][k] <= i + a) visited[j][k] = 0;
                else visited[j][k] = 1;
            }
        }
        if(visited[1][1] == 0) pq.push({1, 1});
        visited[1][1] = 1;
        while(!pq.empty()) {
            auto [x, y] = pq.front();
            pq.pop();
            if(x == N && y == N) return 1;
            for(int j = 0; j < 4; j++){
                int nx = x + dx[j];
                int ny = y + dy[j];
                if(0 < nx && nx <= N && 0 < ny && ny <= N && visited[nx][ny] == 0) {
                    pq.push({nx, ny});
                    visited[nx][ny] = 1;
                }
            }
        }
    }
    return 0;
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> N;
    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= N; j++) {
            cin >> board[i][j];
        }
    }
    int start = -1;
    int end = 200;
    while(start + 1 < end) {
        int mid = (start + end) / 2;
        if(bfs(mid)) end = mid;
        else start = mid;
    }
    cout << end;
    return 0;
}