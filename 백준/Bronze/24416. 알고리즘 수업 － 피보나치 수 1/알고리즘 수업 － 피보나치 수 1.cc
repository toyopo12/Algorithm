#include <iostream>

using namespace std;

long long arr[44];
int n;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> n;
    arr[1] = 1;
    arr[2] = 1;
    for(int i = 3; i <= n; i++) arr[i] = arr[i - 1] + arr[i - 2];
    cout << arr[n] << " " << n - 2;
    return 0;
}