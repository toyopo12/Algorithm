#include <iostream>
#include <map>

using namespace std;

map<long long, long long> m;
long long N;

long long fibo(long long n){
    if(n == 0) return 0;
    else if(n == 1) return 1;
    else if(n == 2) return 1;
    else if(m.count(n) != 0) return m[n];
    else{
        if(n % 2 == 0){
            long long x = n / 2;
            long long x1 = fibo(x);
            long long x2 = fibo(x - 1);
            m[n] = 2 * x1 * x2 + x1 * x1;
            m[n] %= 1000000007;
            return m[n];
        }
        else{
            long long x = (n + 1) / 2;
            long long x1 = fibo(x);
            long long x2 = fibo(x - 1);
            m[n] = x1 * x1 + x2 * x2;
            m[n] %= 1000000007;
            return m[n];
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> N;
    cout << (fibo(N) * fibo(N + 1)) % 1000000007;
    return 0;
}