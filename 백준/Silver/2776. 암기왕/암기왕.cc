#include <iostream>
#include <algorithm>

using namespace std;

int arr[1000010];

int main() {
    ios_base ::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n;
        for(int i = 0; i < n; i++) cin >> arr[i];
        sort(arr, arr + n);
        cin >> m;
        for(int i = 0; i < m; i++) {
            int x;
            cin >> x;
            if(lower_bound(arr, arr + n, x) - arr < n && arr[lower_bound(arr, arr + n, x) - arr] == x) cout << "1" << '\n';
            else cout << "0" << '\n';
        }
    }
    return 0;
}