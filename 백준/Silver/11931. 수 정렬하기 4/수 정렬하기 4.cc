#include <iostream>
#include <algorithm>

using namespace std;

int arr[1000100];

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n, greater<>());
    for(int i = 0; i < n; i++) cout << arr[i] << '\n';
    return 0;
}