#include <iostream>
#include <cmath>

using namespace std;

int sosu[10001];

void sosumake() {
    for(int i = 2; i <= 10000; i++) sosu[i] = i;
    for(int i = 2; i <= 10000; i++) {
        if(sosu[i] == 0) continue;
        for(int j = 2 * i; j <= 10000; j += i) sosu[j] = 0;
    }
}

int gcd(int a, int b) {
    int tmp;
    while(b){
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long a, b; cin >> a >> b;
    if(a == b) {
        cout << a << " " << a;
        return 0;
    }
    b /= a;
    sosumake();
    for(int i = floor(sqrt(b)); i > 0; i--) {
        if(b % i == 0) {
            if(gcd(b / i, i) == 1) {
                cout << i * a << " " << b / i * a;
                break;
            }
        }
    }
    return 0;
}