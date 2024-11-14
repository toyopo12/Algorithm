#include <iostream>
#include <vector>
#include <queue>

using namespace std;

priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
int n, k;
bool visited[200020];

void bfs() {
    while(1) {
        auto [x, y] = pq.top();
        if(y == k) {
            cout << x;
            return;
        }
        if(y < k && visited[y * 2] == 0) {
            visited[y * 2] = 1;
            pq.push({x, y * 2});
        }
        if(y < k && visited[y + 1] == 0) {
            visited[y + 1] = 1;
            pq.push({x + 1, y + 1});
        }
        if(y > 0 && visited[y - 1] == 0) {
            visited[y - 1] = 1;
            pq.push({x + 1, y - 1});
        }
        pq.pop();
    }
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cin.tie(nullptr);
    cin >> n >> k;
    pq.push({0, n});
    bfs();
    return 0;
}