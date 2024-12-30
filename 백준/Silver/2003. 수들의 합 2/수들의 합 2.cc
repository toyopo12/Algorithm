// 투 포인터 연습문제,,,
#include <iostream>

using namespace std;

long long arr[10010];
long long N, M, a, b, sum, result;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> N >> M;
    for(int i = 0; i < N; i++) cin >> arr[i];
    sum = arr[0];
    while(a <= b && b < N) {
        if(sum < M) sum += arr[++b];
        else if(sum == M) {
            result++;
            sum += arr[++b];
        }
        else {
            sum -= arr[a++];
            if(a > b) {
                b = a;
                sum = arr[b];
            }
        }
    }
    cout << result;
    return 0;
}