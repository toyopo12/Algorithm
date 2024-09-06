#include <iostream>
#include <algorithm>

using namespace std;

int arr[1010];
int dp[1010][31][3];
int plum;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    dp[0][0][1] = 1;
    int t,w;
    cin >> t >> w;
    for(int i = 1; i <= t; i++) cin >> arr[i];
    for(int i = 1; i <= t; i++){
        if(arr[i] == 1){
            dp[i][0][1] = dp[i - 1][0][1] + 1;
            dp[i][0][2] = dp[i - 1][0][2];
        }
        else{
            dp[i][0][1] = dp[i - 1][0][1];
            dp[i][0][2] = dp[i - 1][0][2] + 1;
        }
        for(int j = 1; j <= w; j++){
            if(arr[i] == 1){
                dp[i][j][1] = max(dp[i - 1][j][1], dp[i - 1][j - 1][2]) + 1;
                dp[i][j][2] = max(dp[i - 1][j - 1][1], dp[i - 1][j][2]);
            }
            else{
                dp[i][j][1] = max(dp[i - 1][j][1], dp[i - 1][j - 1][2]);
                dp[i][j][2] = max(dp[i - 1][j - 1][1], dp[i - 1][j][2]) + 1;
            }
        }
    }
    for(int i = 0; i <= w; i++){
        for(int w = 1; w <= 2; w++){
            plum = max(dp[t][i][w], plum);
        }
    }
    cout << plum - 1;
    return 0;
}