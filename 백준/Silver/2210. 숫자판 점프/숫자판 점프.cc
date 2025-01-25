#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>
#include <cstring>
#include <set>

using namespace std;

set<string> s;
char arr[6][6];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

void dfs(int n, int m) {
    queue<pair<pair<int, string>, pair<int, int>>> q;
    q.push({{0, ""}, {n, m}});
    while(!q.empty()) {
        if(q.front().first.first == 6) s.insert(q.front().first.second);
        else {
            auto [x, y] = q.front().second;
            for(int i = 0; i < 4; i++) {
                int nx = x + dx[i];
                int ny = y + dy[i];
                if(0 <= nx && nx < 5 && 0 <= ny && ny < 5) {
                    q.push({{q.front().first.first + 1, q.front().first.second + arr[x][y]}, {nx, ny}});
                }
            }
        }
        q.pop();
    }
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cin.tie(nullptr);
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            dfs(i, j);
        }
    }
    cout << s.size();
    return 0;
}