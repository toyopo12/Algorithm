#include <iostream>

using namespace std;

int arr[100100];
int N, M;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> N >> M;
    for(int i = 0; i < M; i++) cin >> arr[i];
    int start = 0;
    int end = 100000;
    while(start < end - 1) {
        int mid = (start + end) / 2;
        int now = 0;
        bool check = true;
        for(int i = 0; i < M; i++) {
            if(now < arr[i] - mid) {
                check = false;
                break;
            }
            now = arr[i] + mid;
        }
        if(now >= N && check) end = mid;
        else start = mid;
    }
    cout << end;
    return 0;
}