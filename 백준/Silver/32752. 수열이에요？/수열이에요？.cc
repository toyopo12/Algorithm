#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    bool result = true;
    int N, L, R; cin >> N >> L >> R;
    vector<int> v(N);
    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }
    sort(v.begin() + L - 1, v.begin() + R);
    for (int i = 1; i < N; i++) {
        if (v[i - 1] > v[i]) {
            result = false;
        }
    }
    if (result) cout << "1";
    else cout << "0";

    return 0;
}