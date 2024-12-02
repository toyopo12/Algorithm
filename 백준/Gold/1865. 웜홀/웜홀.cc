#include <iostream>
#include <algorithm>

using namespace std;

int dp[505][505];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int TC; cin >> TC;
    while(TC--) {
        int N, M, W; cin >> N >> M >> W;
        for(int i = 1; i <= N; i++) {
            for(int j = 1; j <= N; j++) {
                if(i == j) dp[i][j] = 0;
                else dp[i][j] = 25000025;
            }
        }
        for(int i = 0; i < M; i++) {
            int S, E, T; cin >> S >> E >> T;
            dp[S][E] = min(dp[S][E], T);
            dp[E][S] = min(dp[E][S], T);
        }
        for(int i = 0; i < W; i++) {
            int S, E, T; cin >> S >> E >> T;
            dp[S][E] = min(dp[S][E], -T);
        }
        for(int i = 1; i <= N; i++) {
            for(int j = 1; j <= N; j++) {
                for(int k = 1; k <= N; k++) {
                    dp[j][k] = min(dp[j][k], dp[j][i] + dp[i][k]);
                }
            }
        }
        bool possible = false;
        for(int i = 1; i <= N; i++) {
            for(int j = 1; j <= N; j++) {
                if(dp[i][j] + dp[j][i] < 0) {
                    possible = true;
                    break;
                }
            }
        }
        if(possible) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}