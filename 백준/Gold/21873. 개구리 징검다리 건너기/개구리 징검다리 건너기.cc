#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int N; cin >> N;
    cout << N * (N + 2) << '\n';
    for(int i = 1; i <= N; i++) {
        if(i % 2 == 1) {
            for(int j = 1; j <= i; j++) {
                cout << 1 << " " << j << '\n';
            }
        }
        else {
            for(int j = 1; j <= i; j++) {
                cout << 2 << " " << j << '\n';
            }
        }
    }
    if(N % 2 == 0) {
        for(int j = 1; j <= N; j++) {
            cout << 1 << " " << j << '\n';
        }
    }
    else {
        for(int j = 1; j <= N; j++) {
            cout << 2 << " " << j << '\n';
        }
    }
    for(int i = N; i >= 1; i--) {
        if(i % 2 == 1) {
            for(int j = N - i + 1; j <= N; j++) {
                cout << 1 << " " << j << '\n';
            }
        }
        else {
            for(int j = N - i + 1; j <= N; j++) {
                cout << 2 << " " << j << '\n';
            }
        }
    }
    return 0;
}