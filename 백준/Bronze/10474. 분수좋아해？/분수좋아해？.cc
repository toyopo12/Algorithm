#include <iostream>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    
    while (1) {
        int x, y; cin >> x >> y;
        if (x == 0 && y == 0) break;
        cout << x / y << " " << x % y << " / " << y << '\n';
    }
    
    return 0;
}