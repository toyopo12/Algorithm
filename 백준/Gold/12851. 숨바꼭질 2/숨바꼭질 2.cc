#include <iostream>

using namespace std;

int dp[2][200020];
int fasttime;

int main() {
    ios_base ::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, k;
    cin >> n >> k;
    dp[0][n] = 1;
    if(n > k) cout << n - k << " " << 1;
    else {
        while(1) {
            if(dp[fasttime % 2][k] != 0) break;
            if(fasttime % 2 == 0) {
                dp[1][0] = dp[0][1];
                for(int i = 1; i <= k + 100; i++) {
                    if(i % 2 == 0) dp[1][i] = dp[0][i - 1] + dp[0][i + 1] + dp[0][i / 2];
                    else dp[1][i] = dp[0][i - 1] + dp[0][i + 1];
                }
            }
            else {
                dp[0][0] = dp[1][1];
                for(int i = 1; i <= k + 100; i++) {
                    if(i % 2 == 0) dp[0][i] = dp[1][i - 1] + dp[1][i + 1] + dp[1][i / 2];
                    else dp[0][i] = dp[1][i - 1] + dp[1][i + 1];
                }
            }
            fasttime++;
        }
        cout << fasttime << '\n' << dp[fasttime % 2][k];
    }
    return 0;
}