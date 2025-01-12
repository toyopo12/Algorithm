#include <iostream>

using namespace std;

int arr[100010];

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n);
    cin >> m;
    for(int i = 0; i < m; i++){
        int a;
        cin >> a;
        if(a == arr[lower_bound(arr, arr + n, a) - arr] && lower_bound(arr, arr + n, a) - arr < n) cout << "1" << '\n';
        else cout << "0" << '\n';
    }
    return 0;
}