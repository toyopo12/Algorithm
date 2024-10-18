#include <iostream>
#include <algorithm>

using namespace std;

int a[55];
int b[55];
int smin;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    sort(a, a + n);
    sort(b, b + n, greater<>());
    for(int i = 0; i < n; i++) smin += a[i] * b[i];
    cout << smin;
    return 0;
}