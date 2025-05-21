#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);

    int T; cin >> T;
    while (T--) {
        int result = 0;
        string x; cin >> x;

        if (x.size() < 3) cout << "0" << '\n';
        else {
            for (int i = 0; i < x.size() - 2; i++) {
                if (x[i] == 'W' && x[i + 1] == 'O' && x[i + 2] == 'W') {
                    result++;
                }
            }

            cout << result << '\n';
        }
    }

    return 0;
}