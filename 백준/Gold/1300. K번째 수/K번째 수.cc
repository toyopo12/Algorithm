#include <iostream>
#include <algorithm>

using namespace std;

int N, K;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> N >> K;
    int start = 0;
    int end = 1000000000;
    while(start + 1 < end) {
        int mid = (start + end) / 2;
        long long good = 0;
        for(int i = 1; i <= N; i++) {
            good += min(N, mid / i);
            if(good >= K) break;
        }
        if(good >= K) end = mid;
        else start = mid;
    }
    cout << end;
    return 0;
}