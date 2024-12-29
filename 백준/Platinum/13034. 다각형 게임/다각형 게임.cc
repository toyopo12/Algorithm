#include <iostream>
#include <set>

using namespace std;

int dp[1010];
int N;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> N;
    dp[0] = 0;
    dp[1] = 0;
    for(int i = 2; i <= N; i++) {
        set<int> s;
        for(int j = 1; j < i; j++) s.insert(dp[j - 1] ^ dp[i - 1 - j]);
        while(s.count(dp[i])) dp[i]++;
    }
    if(dp[N] == 0) cout << "2";
    else cout << "1";
    return 0;
}