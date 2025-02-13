#include <iostream>

using namespace std;

int board[33][33];

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    for(int i = 0; i < 14; i++) {
        board[i][14] = 1;
        board[14][i] = 15;
    }
    for(int i = 15; i < 30; i++) {
        board[i][14] = 225;
        board[14][i] = 3375;
    }
    for (int i = 0; i < 30; i++) {
        for (int j = 0; j < 30; j++) {
            cout << board[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}