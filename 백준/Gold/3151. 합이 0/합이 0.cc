#include <iostream>
#include <algorithm>

using namespace std;

int arr[10010];
long long N, result;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> N;
    for(int i = 0; i < N; i++) cin >> arr[i];
    sort(arr, arr + N);
    for(int i = 0; i < N; i++) {
        for(int j = i + 1; j < N; j++) {
            result += upper_bound(arr + j + 1, arr + N, 0 - arr[i] - arr[j]) - lower_bound(arr + j + 1, arr + N, 0 - arr[i] - arr[j]);
        }
    }
    cout << result;
    return 0;
}