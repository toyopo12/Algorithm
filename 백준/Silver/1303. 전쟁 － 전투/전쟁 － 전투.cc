#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>
#include <cstring>
#include <set>
#include <map>

using namespace std;

int N, M, me, you;
bool visited[110][110];
char board[110][110];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

int bfs(int x, int y) {
    queue<pair<int, int>> pq;
    int good = 0;
    char target = board[x][y];
    pq.push({x, y});
    while(!pq.empty()) {
        auto [a, b] = pq.front();
        pq.pop();
        good++;
        for(int i = 0; i < 4; i++) {
            int nx = a + dx[i];
            int ny = b + dy[i];
            if(0 <= nx && nx < N && 0 <= ny && ny < M) {
                if(board[nx][ny] == target && visited[nx][ny] == 0) {
                    pq.push({nx, ny});
                    visited[nx][ny] = 1;
                }
            }
        }
    }
    return good;
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cin.tie(nullptr);
    cin >> M >> N;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cin >> board[i][j];
        }
    }
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            if(visited[i][j] == 0) {
                visited[i][j] = 1;
                int result = bfs(i, j);
                if(board[i][j] == 'W') me += result * result;
                else you += result * result;
            }
        }
    }
    cout << me << " " << you;
    return 0;
}