#include <iostream>
#include <algorithm>

using namespace std;

int good[2000020];

int main() {
    ios_base ::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n + m; i++) cin >> good[i];
    sort(good, good + n + m);
    for(int i = 0; i < n + m; i++) cout << good[i] << " ";
    return 0;
}