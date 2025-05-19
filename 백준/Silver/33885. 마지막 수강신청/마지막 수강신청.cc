#include <iostream>
#include <cmath>
using namespace std;

int score[10];
bool checking[120][10];

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);

    bool result = false;
    int N, M; cin >> N >> M;

    // 사전 조사
    for (int i = 0; i < N; i++) {
        cin >> score[i];
        int s; cin >> s;
        for (int j = 0; j < s; j++) {
            string x; cin >> x;
            int h; cin >> h;
            if (x == "MON") checking[h + 24 * 0][i] = 1;
            else if (x == "TUE") checking[h + 24 * 1][i] = 1;
            else if (x == "WED") checking[h + 24 * 2][i] = 1;
            else if (x == "THU") checking[h + 24 * 3][i] = 1;
            else if (x == "FRI") checking[h + 24 * 4][i] = 1;
        }
    }

    // 2^N의 경우의 수 다 찾아보기
    for (int i = 0; i < pow(2, N); i++) {
        bool result1 = true;
        int savei = i;
        int saven = 0;
        bool save[10] = {0};

        // i를 이진수로 바꿔서 생각
        while (savei != 0) {
            if (savei % 2 == 1) save[saven] = 1;
            savei /= 2;
            saven++;
        }

        // 가능한 시간표인지 확인 - 무식하게 120 * 10 크기 확인하자
        for (int j = 0; j < 120; j++) {
            int savem = 0;
            for (int k = 0; k < 10; k++) {
                if (save[k] == 1) {
                    if (checking[j][k] == 1) {
                        savem++;
                    }
                }
            }

            if (savem > 1) {
                result1 = false;
                break;
            }
        }

        // 최소조건 - 시간표가 안겹칠 떄
        if (result1 == true) {
            int check2 = 0;

            // 총 학점이 M보다 큰지 확인하기
            for (int j = 0; j < 10; j++) {
                if (save[j] == 1) {
                    check2 += score[j];
                }
            }

            // 조건 만족하는가?
            if (check2 >= M) {
                result = true;
                break;
            } else {
                result = false;
            }
        }
    }

    if (result) cout << "YES";
    else cout << "NO";

    return 0;
}