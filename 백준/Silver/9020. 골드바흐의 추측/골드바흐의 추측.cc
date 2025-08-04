#include <iostream>
using namespace std;

bool sosu[10010];

void sosumake() {
    for (int i = 2; i <= 10000; i++) {
        if (sosu[i] == 0) {
            for (int j = i * 2; j <= 10000; j += i) {
                sosu[j] = 1;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    sosumake();
    int T; cin >> T;
    while (T--) {
        int n; cin >> n;
        for (int i = n / 2; i >= 2; i--) {
            if (sosu[i] == 0) {
                if (sosu[n - i] == 0) {
                    cout << i << " " << n - i << '\n';
                    break;
                }
            }
        }
    }
    return 0;
}