#include <iostream>

using namespace std;

int play[10010];
int N, M;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> N >> M;
    if(N <= M) {
        cout << N;
        return 0;
    }
    else N -= M;
    for(int i = 0; i < M; i++) cin >> play[i];
    long long start = 0;
    long long end = 60000000000;
    while(start + 1 < end) {
        long long mid = (start + end) / 2;
        long long good = 0;
        for(int i = 0; i < M; i++) {
            good += mid / play[i];
            if(good >= N) break;
        }
        if(good >= N) end = mid;
        else start = mid;
    }
    // 몇 분까지 입장 받는지는 구함.. = end
    long long result = 0;
    for(int i = 0; i < M; i++) result += end / play[i];
    result -= N;
    for(int i = M - 1; i >= 0; i--) {
        if(end % play[i] == 0) {
            if(result == 0) {
                cout << i + 1;
                return 0;
            }
            result--;
        }
    }
    return 0;
}