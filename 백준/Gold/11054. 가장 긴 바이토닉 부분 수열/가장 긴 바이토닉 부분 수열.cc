#include <iostream>
#include <algorithm>

using namespace std;

int s[1010];
int up[1010];
int down[1010];
int dp[1010];

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int good = 0;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> s[i];
    for(int i = 0; i < n; i++){
        up[i] = 1;
        for(int j = 0; j < i; j++){
            if(s[i] > s[j]) up[i] = max(up[i], up[j] + 1);
        }
    }
    for(int i = n - 1; i >= 0; i--){
        down[i] = 1;
        for(int j = n - 1; j > i; j--){
            if(s[i] > s[j]) down[i] = max(down[i], down[j] + 1);
        }
    }
    for(int i = 0; i < n; i++){
        dp[i] = up[i] + down[i];
        good = max(good, dp[i]);
    }
    cout << good - 1;
    return 0;
}