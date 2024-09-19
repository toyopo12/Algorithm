#include <iostream>

#define hmm 1000000007
using namespace std;

long long nsum = 1;
long long ksum = 1;

long long magic(int n){
    if(n == 1) return ksum;
    long long ret = magic(n / 2);
    if(n % 2 == 0) return (ret * ret) % hmm;
    else return (((ret * ret) % hmm) * ksum) % hmm;
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    for(int i = n; i > n - k; i--){
        nsum *= i;
        nsum %= hmm;
    }
    for(int i = k; i > 0; i--){
        ksum *= i;
        ksum %= hmm;
    }
    cout << ((nsum % hmm) * (magic(hmm - 2) % hmm)) % hmm;
    return 0;
}