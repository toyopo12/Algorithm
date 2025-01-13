#include <iostream>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;

char board[1010][1010];
int visited[1010][1010];
int firevisited[1010][1010];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
int T, w, h;

queue<pair<int, int>> vq, fire;

int bfs() {
    while(!fire.empty()) {
        auto [x, y] = fire.front();
        fire.pop();
        for(int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(0 <= nx && nx < w && 0 <= ny && ny < h) {
                if(firevisited[ny][nx] == -1 && board[ny][nx] != '#') {
                    firevisited[ny][nx] = firevisited[y][x] + 1;
                    fire.push({nx, ny});
                }
            }
        }
    }
    while(!vq.empty()) {
        auto [x, y] = vq.front();
        vq.pop();
        for(int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(0 <= nx && nx < w && 0 <= ny && ny < h) {
                if(firevisited[ny][nx] == -1) {
                    if(visited[ny][nx] == 0 && board[ny][nx] != '#') {
                        visited[ny][nx] = visited[y][x] + 1;
                        vq.push({nx, ny});
                    }
                }
                else {
                    if(visited[ny][nx] == 0 && firevisited[ny][nx] > visited[y][x] + 1 && board[ny][nx] != '#') {
                        visited[ny][nx] = visited[y][x] + 1;
                        vq.push({nx, ny});
                    }
                }
            }
            else {
                return visited[y][x] + 1;
            }
        }
    }
    return -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> T;
    while(T--) {
        memset(visited, 0, sizeof(visited));
        memset(firevisited, -1, sizeof(firevisited));
        cin >> w >> h;
        for(int i = 0; i < h; i++) {
            for(int j = 0; j < w; j++) {
                cin >> board[i][j];
                if(board[i][j] == '@') {
                    vq.push({j, i});
                }
                if(board[i][j] == '*') {
                    fire.push({j, i});
                    firevisited[i][j] = 0;
                }
            }
        }
        int result = bfs();
        if(result == -1) cout << "IMPOSSIBLE\n";
        else cout << result << '\n';
        vq = queue<pair<int, int>>();
        fire = queue<pair<int, int>>();
    }
    return 0;
}