#include <iostream>

using namespace std;

int gcd(int a, int b) {
    int tmp;
    if(a < b) swap(a, b);
    while(b) {
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
    int T; cin >> T;
    while(T--) {
        int a, b; cin >> a >> b;
        int high = gcd(a, b);
        cout << a * b / high << " " << high << '\n';
    }
    return 0;
}