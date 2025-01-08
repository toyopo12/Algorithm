#include <iostream>
#include <vector>

using namespace std;

int N, K;
vector<int> v;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> N >> K;
    for(int i = 0; i < N; i++) {
        int x; cin >> x;
        v.push_back(x);
    }
    int start = 1;
    int end = 3000000;
    while(start < end - 1) {
        int mid = (start + end) / 2;
        int result = 0;
        int good = 0;
        for(int i = 0; i < N; i++) {
            result += v[i];
            if(result >= mid) {
                result = 0;
                good++;
            }
        }
        if(good >= K) start = mid;
        else end = mid;
    }
    cout << start;
    return 0;
}