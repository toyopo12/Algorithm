#include <iostream>

using namespace std;

char board[22][22];
bool check[27];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
int R, C, result;

void dfs(int n, int m, bool arr[27], int good) {
    if(result < good) result = good;
    for (int i = 0; i < 4; i++) {
        int nx = m + dx[i];
        int ny = n + dy[i];
        if(0 <= nx && nx < C && 0 <= ny && ny < R) {
            if(arr[board[ny][nx] - 'A'] == 0) {
                arr[board[ny][nx] - 'A'] = 1;
                dfs(ny, nx, arr, good + 1);
                arr[board[ny][nx] - 'A'] = 0;
            }
        }
    }
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> R >> C;
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> board[i][j];
        }
    }
    check[board[0][0] - 'A'] = 1;
    dfs(0, 0, check, 1);
    cout << result;
    return 0;
}