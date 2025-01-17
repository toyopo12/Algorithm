#include <iostream>
#include <vector>

using namespace std;

vector<pair<int, char>> path[505];
char card[1010];
long long dp[505][2];
long long N, M, K, good, awesome, result;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> N;
    for(int i = 0; i < N; i++) cin >> card[i];
    cin >> M >> K;
    for(int i = 0; i < K; i++) {
        int a, b;
        char color;
        cin >> a >> b >> color;
        path[a].push_back({b, color});
        path[b].push_back({a, color});
    }
    for(int i = 1; i <= M; i++) {
        for(int j = 0; j < 2; j++) {
            dp[i][j] = -1;
        }
    }
    dp[1][0] = 0;
    for(int i = 0; i < N; i++) {
        if(i % 2 == 0) {
            for(int j = 1; j <= M; j++) {
                good = -1;
                for(int k = 0; k < path[j].size(); k++) {
                    awesome = dp[path[j][k].first][0];
                    if(awesome == -1) continue;
                    if(path[j][k].second == card[i]) awesome++;
                    if(good < awesome) good = awesome;
                }
                dp[j][1] = good;
            }
        }
        else {
            for(int j = 1; j <= M; j++) {
                good = -1;
                for(int k = 0; k < path[j].size(); k++) {
                    awesome = dp[path[j][k].first][1];
                    if(awesome == -1) continue;
                    if(path[j][k].second == card[i]) awesome++;
                    if(good < awesome) good = awesome;
                }
                dp[j][0] = good;
            }
        }
    }
    for(int i = 1; i <= M; i++) {
        if(result < dp[i][N % 2]) {
            result = dp[i][N % 2];
        }
    }
    cout << result * 10;
    return 0;
}