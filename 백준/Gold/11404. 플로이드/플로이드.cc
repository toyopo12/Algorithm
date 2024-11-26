#include <iostream>
#include <algorithm>

using namespace std;

int dp[110][110];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, m; cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i == j) dp[i][j] = 0;
            else dp[i][j] = 10000010;
        }
    }
    for(int i = 0; i < m; i++) {
        int a, b, c; cin >> a >> b >> c;
        dp[a][b] = min(dp[a][b], c);
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            for(int k = 1; k <= n; k++) {
                dp[j][k] = min(dp[j][k], dp[j][i] + dp[i][k]);
            }
        }
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(dp[i][j] == 10000010) cout << "0 ";
            else cout << dp[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}