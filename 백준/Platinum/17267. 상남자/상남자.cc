#include <iostream>
#include <queue>

using namespace std;

int board[1010][1010];
bool visited[1010][1010];
queue<pair<pair<int, int>, pair<int, int>>> ppq;
int N, M, L, R;
int result;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> N >> M >> L >> R;
    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= M; j++) {
            char x; cin >> x;
            board[i][j] = x - '0';
            if(board[i][j] == 2) {
                ppq.push({{i, j}, {L, R}});
            }
        }
    }
    while(!ppq.empty()) {
        auto [i, j] = ppq.front().first;
        auto [l, r] = ppq.front().second;
        if(visited[i][j] == 0) {
            visited[i][j] = 1;
            result++;
            // 위
            for(int k = i; k > 1; k--) {
                if(visited[k - 1][j] == 0 && board[k - 1][j] == 0) {
                    ppq.push({{k - 1, j}, {l, r}});
                }
                else break;
            }
            // 아래
            for(int k = i; k < N; k++) {
                if(visited[k + 1][j] == 0 && board[k + 1][j] == 0) {
                    ppq.push({{k + 1, j}, {l, r}});
                }
                else break;
            }
            // 오른쪽
            if(j < M && visited[i][j + 1] == 0 && r > 0 && board[i][j + 1] == 0) {
                ppq.push({{i, j + 1}, {l, r - 1}});
            }
            // 왼쪽
            if(j > 1 && visited[i][j - 1] == 0 && l > 0 && board[i][j - 1] == 0) {
                ppq.push({{i, j - 1}, {l - 1, r}});
            }
        }
        ppq.pop();
    }
    cout << result;
    return 0;
}