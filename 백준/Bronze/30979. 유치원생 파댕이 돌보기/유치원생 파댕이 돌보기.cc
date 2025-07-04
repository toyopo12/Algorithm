#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T, N; cin >> T >> N;
    while (N--) {
        int F; cin >> F;
        T -= F;
    }
    if (T <= 0) cout << "Padaeng_i Happy";
    else cout << "Padaeng_i Cry";
    return 0;
}