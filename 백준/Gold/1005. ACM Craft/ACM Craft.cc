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

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cin.tie(nullptr);
    cin >> t;
    while(t--) {
        int build[1010];
        int fast[1010] = {0};
        int indegree[1010] = {0};
        vector<int> graph[1010];
        queue<int> q;
        int N, K, W; cin >> N >> K;
        for(int i = 1; i <= N; i++) cin >> build[i];
        for(int i = 0; i < K; i++) {
            int X, Y; cin >> X >> Y;
            graph[X].push_back(Y);
            indegree[Y]++;
        }
        cin >> W;
        for(int i = 1; i <= N; i++) {
            if(indegree[i] == 0) {
                q.push(i);
                fast[i] = build[i];
            }
        }
        while(!q.empty()){
            int cur = q.front();
            q.pop();
            if(cur == W) break;
            for(int i = 0; i < graph[cur].size(); i++){
                int next = graph[cur][i];
                fast[next] = max(fast[next], fast[cur] + build[next]);
                indegree[next]--;
                if(indegree[next] == 0) q.push(next);
            }
        }
        cout << fast[W] << '\n';
    }
    return 0;
}