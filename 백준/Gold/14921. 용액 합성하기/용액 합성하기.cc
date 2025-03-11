#include <iostream>

using namespace std;

int N;
int mini = 0x7fffffff;
int arr[100010];

int main() {
    cin >> N;
    for(int i = 0; i < N; i++) cin >> arr[i];
    for(int i = 0; i < N - 1; i++) {
        int start = i + 1;
        int end = N;
        while(start < end - 1) {
            int mid = (start + end) / 2;
            if(arr[i] + arr[mid] < 0) start = mid;
            else end = mid;
        }
        if(start != i && abs(arr[i] + arr[start]) < abs(mini)) {
            mini = arr[i] + arr[start];
        }
        if(end < N && abs(arr[i] + arr[end]) < abs(mini)) {
            mini = arr[i] + arr[end];
        }
    }
    cout << mini;
    return 0;
}