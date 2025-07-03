#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N; cin >> N;
    while (N--) {
        string x; cin >> x;
        for (int i = 0; i < x.size(); i++) {
            if (x[i] == 'S') {
                cout << x;
                break;
            }
        }
    }
    return 0;
}