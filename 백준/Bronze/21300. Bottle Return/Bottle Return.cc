#include <iostream>
using namespace std;

int result;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 0; i < 6; i++) {
        int x; cin >> x;
        result += x;
    }
    
    cout << result * 5;

    return 0;
}