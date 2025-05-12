#include <iostream>
using namespace std;

int board[9][9];

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);

    int T; cin >> T;
    for (int k = 1; k <= T; k++) {
        bool result = true;

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                cin >> board[i][j];
            }
        }

        for (int i = 0; i < 9; i++) {
            bool checkingx[10] = {0};
            bool checkingy[10] = {0};

            for (int j = 0; j < 9; j++) {
                if (checkingx[board[i][j]] == 1) result = false;
                if (checkingy[board[j][i]] == 1) result = false;

                checkingx[board[i][j]] = 1;
                checkingy[board[j][i]] = 1;
            }
        }

        for (int i = 0; i < 9; i += 3) {
            for (int j = 0; j < 9; j += 3) {
                bool checkingz[10] = {0};

                for (int p = 0; p < 3; p++) {
                    for (int o = 0; o < 3; o++) {
                        if (checkingz[board[i + p][j + o]] == 1) result = false;

                        checkingz[board[i + p][j + o]] = 1;
                    }
                }
            }
        }

        if (result) cout << "Case " << k << ": CORRECT\n";
        else cout << "Case " << k << ": INCORRECT\n";
    }

    return 0;
}