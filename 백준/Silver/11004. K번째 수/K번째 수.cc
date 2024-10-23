#include <iostream>
#include <algorithm>

using namespace std;

int arr[5000500];

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n);
    cout << arr[k - 1] << '\n';
    return 0;
}