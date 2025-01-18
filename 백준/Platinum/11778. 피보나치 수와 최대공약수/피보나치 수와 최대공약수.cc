#include <iostream>
#include <map>

using namespace std;

map<long long, long long> f;
long long n, m;

long long gcd(long long a, long long b) {
    long long tmp;
    while(b){
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

long long fibo(long long N) {
    if(N == 0) return 0;
    if(N == 1) return 1;
    if(N == 2) return 1;
    if(f.count(N) > 0) return f[N];

    if(N % 2 == 0) {
        long long M = N / 2;
        long long temp1 = fibo(M - 1);
        long long temp2 = fibo(M);
        f[N] = ((2LL * temp1 + temp2) * temp2) % 1000000007;
        return f[N];
    }
    else {
        long long M = (N + 1) / 2;
        long long temp1 = fibo(M);
        long long temp2 = fibo(M - 1);
        f[N] = (temp1 * temp1 + temp2 * temp2) % 1000000007;
        return f[N];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> n >> m;
    long long result = gcd(n, m);
    cout << fibo(result);
    return 0;
}