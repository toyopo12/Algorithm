#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    while(1) {
        int counting = 0;
        long long a, b; cin >> a >> b;
        if(a == 0 && b == 0) break;
        while(a != 0 && b != 0) {
            counting++;
            if(a > b) swap(a, b);
            if(2 * a < b) break;
            if(b % a == 0) break;
            b -= a;
        }
        if(counting % 2 == 0) cout << "B wins\n";
        else cout << "A wins\n";
    }
    return 0;
}