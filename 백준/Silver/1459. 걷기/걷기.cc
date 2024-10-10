#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cin.tie(nullptr);
    long long n, m, w, s;
    cin >> n >> m >> w >> s;
    if(w >= s && (max(n, m) - min(n, m)) % 2 == 0) cout << max(n, m) * s;
    else if(w >= s && (max(n, m) - min(n, m)) % 2 == 1) cout << (max(n, m) - 1) * s + w;
    else if(2 * w >= s) cout << min(n, m) * s + (max(n, m) - min(n, m)) * w;
    else cout << (n + m) * w;
    return 0;
}