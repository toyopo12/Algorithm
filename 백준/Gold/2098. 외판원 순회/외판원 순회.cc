#include <iostream>
#include <cstring>

using namespace std;

int cost[20][20];
int dp[17][1 << 16];
int n;

int dfs(int cur, int visited){
    if(visited == (1 << n) - 1){
        if(cost[cur][0] == 0) return 20000000;
        return cost[cur][0];
    }
    if(dp[cur][visited] != -1) return dp[cur][visited];
    dp[cur][visited] = 20000000;
    for(int i = 0; i < n; i++){
        if(cost[cur][i] == 0) continue;
        if((visited & (1 << i)) == (1 << i)) continue;
        dp[cur][visited] = min(dp[cur][visited], cost[cur][i] + dfs(i, visited | 1 << i));
    }
    return dp[cur][visited];
}
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> n;
    for(int i = 0; i < n; i++) for(int j = 0; j < n; j++) cin >> cost[i][j];
    memset(dp, -1, sizeof(dp));
    cout << dfs(0, 1);
    return 0;
}