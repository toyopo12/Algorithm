#include <iostream>

using namespace std;

int t[1501500];
int p[1501500];
int dp[1501500];

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> t[i] >> p[i];
    for(int i = 1; i <= n; i++){
        if(dp[i] + p[i] > dp[i + t[i]]) dp[i + t[i]] = dp[i] + p[i];
        if(dp[i + 1] < dp[i]) dp[i + 1] = dp[i];
    }
    cout << dp[n + 1];
    return 0;
}