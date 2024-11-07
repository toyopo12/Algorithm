#include <iostream>
#include <cmath>

using namespace std;

pair<float, float> xy[16];
float cost[16][16];
float dp[16][1 << 16];
int n;

float dfs(int cur, int visited){
    if(visited == (1 << n) - 1){
        if(cost[cur][0] == 0) return 100000;
        return cost[cur][0];
    }
    if(dp[cur][visited] != 0) return dp[cur][visited];
    dp[cur][visited] = 100000;
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
    cout.precision(10);
    cin >> n;
    for(int i = 0; i < n; i++) cin >> xy[i].first >> xy[i].second;
    for(int i = 0; i < n; i++){
        float a = xy[i].first;
        float b = xy[i].second;
        for(int j = 0; j < n; j++) if(i != j) cost[i][j] = sqrt(pow(a - xy[j].first, 2) + pow(b - xy[j].second, 2));
    }
    cout << dfs(0, 1);
    return 0;
}