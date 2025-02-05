#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>
#include <cstring>
#include <set>
#include <map>

using namespace std;

int t;
bool visited[110];

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cin.tie(nullptr);
    cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<pair<int, int>> pv;
        queue<int> q;
        bool result = false;
        for(int i = 0; i <= n + 1; i++) {
            int x, y; cin >> x >> y;
            pv.push_back({x, y});
        }
        q.push(0);
        visited[0] = true;
        while(!q.empty()) {
            if(q.front() == n + 1) {
                result = true;
                break;
            }
            for(int i = 0; i <= n + 1; i++) {
                if(q.front() == i || visited[i] == true) continue;
                if(abs(pv[q.front()].first - pv[i].first) + abs(pv[q.front()].second - pv[i].second) <= 1000) {
                    visited[i] = true;
                    q.push(i);
                }
            }
            q.pop();
        }
        if(result) cout << "happy\n";
        else cout << "sad\n";
        memset(visited, 0, sizeof(visited));
    }
    return 0;
}