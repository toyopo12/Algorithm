#include <iostream>
#include <algorithm>

using namespace std;

int forest[502][502];
int dp[502][502];
int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};
int walk;

int dfs(int x, int y)
{
    if(dp[x][y] != 0) return dp[x][y];
    dp[x][y] = 1;
    for(int i = 0; i < 4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(forest[nx][ny] > forest[x][y] && dp[x][y] != 0) dp[x][y] = max(dfs(nx, ny) + 1, dp[x][y]);
    }
    return dp[x][y];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++) cin >> forest[i][j];
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            dfs(i, j);
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            walk = max(walk, dp[i][j]);
        }
    }
    cout << walk;
    return 0;
}