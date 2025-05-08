#include <iostream>
using namespace std;

bool result[10100];

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 1; i <= 10000; i++) {
        int N = i;
        int good = i;

        while (N) {
            good += N % 10;
            N /= 10;
        }

        result[good] = 1;
    }

    for (int i = 1; i <= 10000; i++) {
        if (!result[i]) {
            cout << i << '\n';
        }
    }

    return 0;
}