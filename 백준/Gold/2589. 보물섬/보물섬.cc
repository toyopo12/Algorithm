#include <iostream>
#include <cstring>
#include <queue>

using namespace std;

int visited[52][52];
char land[52][52];
int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};
int landmax = 0;
queue <pair<int, int>> q;

void bfs()
{
    while(q.size()){
        auto [x, y]= q.front();
        q.pop();
        for(int i = 0; i < 4; i++){
            if(land[x + dx[i]][y + dy[i]] == 'L' && visited[x + dx[i]][y + dy[i]] == 0){
                visited[x + dx[i]][y + dy[i]] = visited[x][y] + 1;
                if(landmax < visited[x + dx[i]][y + dy[i]]) landmax = visited[x + dx[i]][y + dy[i]];
                q.push({x + dx[i], y + dy[i]});
            }
        }
    }
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        string x;
        cin >> x;
        for(int j = 0; j < m; j++){
            land[i][j+1] = x[j];
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(land[i][j] == 'L')
            {
                memset(visited,0,sizeof(visited));
                visited[i][j] = 1;
                q.push({i, j});
                bfs();
            }
        }
    }
    cout << landmax - 1;
    return 0;
}