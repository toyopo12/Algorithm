#include <iostream>

using namespace std;

int fibo[1000010];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n; cin >> n;
    fibo[0] = 0;
    fibo[1] = 1;
    for(int i = 2; i <= n; i++) fibo[i] = (fibo[i - 1] + fibo[i - 2]) % 1000000007;
    cout << fibo[n];
    return 0;
}