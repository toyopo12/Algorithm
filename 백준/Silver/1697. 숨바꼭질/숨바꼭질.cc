#include <iostream>
#include <queue>

using namespace std;

queue<pair<int, int>> q;
int n, k;
bool visited[200020];

void bfs()
{
    while(!q.empty()){
        auto [x, y] = q.front();
        if(visited[x] == 0){
            visited[x] = 1;
            if(x == k){
                cout << y;
                break;
            }
            if(x < k && visited[x * 2] == 0) q.push({x * 2, y + 1});
            if(visited[x + 1] == 0 && x < k) q.push({x + 1, y + 1});
            if(visited[x - 1] == 0 && x > 0) q.push({x - 1, y + 1});
        }
        q.pop();
    }
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cin.tie(nullptr);
    cin >> n >> k;
    q.push({n, 0});
    bfs();
    return 0;
}