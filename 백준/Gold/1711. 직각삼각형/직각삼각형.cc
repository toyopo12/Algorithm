#include <iostream>
#include <vector>

using namespace std;

vector<pair<long long, long long>> pv;
int result;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int N; cin >> N;
    for(int i = 0; i < N; i++) {
        long long x, y; cin >> x >> y;
        pv.push_back({x, y});
    }
    for(int i = 0; i < N; i++) {
        for(int j = i + 1; j < N; j++) {
            for(int k = j + 1; k < N; k++) {
                long long a = (pv[i].first - pv[j].first) * (pv[i].first - pv[j].first) + (pv[i].second - pv[j].second) * (pv[i].second - pv[j].second);
                long long b = (pv[i].first - pv[k].first) * (pv[i].first - pv[k].first) + (pv[i].second - pv[k].second) * (pv[i].second - pv[k].second);
                long long c = (pv[j].first - pv[k].first) * (pv[j].first - pv[k].first) + (pv[j].second - pv[k].second) * (pv[j].second - pv[k].second);
                if(a + b == c || a + c == b || b + c == a) result++;
            }
        }
    }
    cout << result;
    return 0;
}