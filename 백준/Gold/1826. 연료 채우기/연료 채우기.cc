#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

vector<pair<int, int>> fuel;
priority_queue<int, vector<int>, less<>> fuelpq;
int n, l, myfuel, stopcount;

bool cmp(pair<int, int> a, pair<int, int> b) {
    return a.first < b.first;
}

int main() {
    ios_base ::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> n;
    for(int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        fuel.push_back({x, y});
    }
    sort(fuel.begin(), fuel.end(), cmp);
    cin >> l >> myfuel;
    fuel.push_back({l, 0});
    for(int i = 0; i <= n; i++) {
        if(fuel[i].first > myfuel) {
            while(!fuelpq.empty() && fuel[i].first > myfuel) {
                myfuel += fuelpq.top();
                stopcount++;
                fuelpq.pop();
            }
            if(fuel[i].first > myfuel) {
                cout << "-1";
                return 0;
            }
            if(i < n) fuelpq.push(fuel[i].second);
        }
        else if(i < n) fuelpq.push(fuel[i].second);
    }
    cout << stopcount;
    return 0;
}