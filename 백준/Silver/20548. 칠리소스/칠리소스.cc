#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

vector<long long> v;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);

    v.push_back(0);
    for (int i = 0; i <= 12; i++) {
        long long x = pow(7, i);
        int y = v.size();

        for (int j = 0; j < y; j++) {
            v.push_back(v[j] + x);
            v.push_back(v[j] + 2 * x);
        }
    }

    sort(v.begin(), v.end());
    long long result; cin >> result;
    cout << lower_bound(v.begin(), v.end(), result) - v.begin();

    return 0;
}