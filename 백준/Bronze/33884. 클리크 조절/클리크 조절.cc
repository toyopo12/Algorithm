#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, int>> first, second;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N; cin >> N;
    for (int i = 0; i < N; i++) {
        int x, y; cin >> x >> y;
        first.push_back({x, y});
    }
    for (int i = 0; i < N; i++) {
        int x, y; cin >> x >> y;
        second.push_back({x, y});
    }
    sort(first.begin(), first.end());
    sort(second.begin(), second.end());
    
    cout << second[0].first - first[0].first << " " << second[0].second - first[0].second;

    return 0;
}