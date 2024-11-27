#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t; cin >> t;
    while(t--) {
        int arr[11];
        for(int i = 0; i < 10; i++) cin >> arr[i];
        sort(arr, arr + 10);
        cout << arr[7] << '\n';
    }
    return 0;
}