#include <iostream>
#include <random>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);

    std::random_device rd; // 난수 생성기
    std::mt19937 gen(rd()); // Mersenne Twister 엔진 사용
    std::uniform_int_distribution<> dis(1, 10000); // 1~10000 사이의 균등분포

    int random_number = dis(gen);
    int random_number1 = dis(gen);

    int resA = 0;
    int A = 0;
    for (int i = 1; i <= 10000; i++) {
        if (i == random_number) continue;
        if (i == random_number1) continue;
        cout << "? A " << i << endl;
        cin >> resA;
        if (resA == 1) {
            A = i;
            break;
        }
    }

    random_number = dis(gen);

    int resB = 0;
    int B = 0;
    for (int i = 1; i <= 10000; i++) {
        if (i == random_number) continue;
        cout << "? B " << i << endl;
        cin >> resB;
        if (resB == 1) {
            B = i;
            break;
        }
    }

    cout << "! " << A + B;

    return 0;
}