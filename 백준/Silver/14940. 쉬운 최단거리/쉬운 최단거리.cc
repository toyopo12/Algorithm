#include <iostream>
#include <queue>

using namespace std;

int n, m;
int board[1010][1010];
int visited[1010][1010];
int nx[4] = {-1, 1, 0, 0};
int ny[4] = {0, 0, -1 ,1};

void bfs(int x, int y){
    queue<pair<int, int>> q;
    q.push({x, y});
    visited[x][y] = 1;
    while(!q.empty()){
        auto[a, b] = q.front();
        q.pop();
        for(int i = 0; i < 4; i++){
            int dx = a + nx[i];
            int dy = b + ny[i];
            if(visited[dx][dy] == 0 && board[dx][dy] != 0){
                visited[dx][dy] = visited[a][b] + 1;
                q.push({dx, dy});
            }
        }
    }
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cin.tie(nullptr);
    cin >> n >> m;
    for(int i = 1; i <= n; i++) for(int j = 1; j <= m; j++) cin >> board[j][i];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(board[j][i] == 2){
                bfs(j, i);
                break;
            }
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(visited[j][i] == 0 && board[j][i] == 0) cout << "0" << " ";
            else cout << visited[j][i] - 1 << " ";
        }
        cout << '\n';
    }
    return 0;
}