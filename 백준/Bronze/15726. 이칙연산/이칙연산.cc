#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);

    long long A, B, C; cin >> A >> B >> C;
    cout << A * B * C / (long long)pow(min(B, C), 2);

    return 0;
}