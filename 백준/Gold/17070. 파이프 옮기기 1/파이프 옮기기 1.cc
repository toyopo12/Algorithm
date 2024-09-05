#include <iostream>

using namespace std;

bool wall[18][18];
int dp[18][18][3];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++) cin >> wall[i][j];
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == 1 && j == 2) dp[i][j][2] = 1;
            else if(!wall[i][j]){
                dp[i][j][0] = dp[i - 1][j][0] + dp[i - 1][j][1];
                if(wall[i - 1][j] == 0 && wall[i][j - 1] == 0) dp[i][j][1] = dp[i - 1][j - 1][0] + dp[i - 1][j - 1][1] + dp[i - 1][j - 1][2];
                dp[i][j][2] = dp[i][j - 1][1] + dp[i][j - 1][2];
            }
        }
    }
    cout << dp[n][n][0] + dp[n][n][1] + dp[n][n][2];
    return 0;
}