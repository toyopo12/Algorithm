#include <iostream>

using namespace std;

long long dp[105];

int main()
{
    dp[1]=1;
    dp[2]=1;
    dp[3]=1;
    for(int i=4;i<=100;i++)
    {
        dp[i]=dp[i-2]+dp[i-3];
    }
    int n;
    cin >> n;
    while(n--)
    {
        int x;
        cin >> x;
        cout << dp[x] << '\n';
    }
    return 0;
}