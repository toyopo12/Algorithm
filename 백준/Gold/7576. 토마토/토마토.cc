#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
int box[1010][1010];
int dist[1010][1010];
queue<pair<int,int>> q;

void bfs()
{
    while(!q.empty())
    {
        auto [x,y] = q.front();
        q.pop();
        for(int i=0;i<4;i++){
            int nx=x+dx[i];
            int ny=y+dy[i];
            if(box[nx][ny]==0)
            {
                q.push({nx,ny});
                dist[nx][ny]=dist[x][y]+1;
                box[nx][ny]=-1;
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
    int sum=0;
    cin >> m >> n;
    memset(box,-1,sizeof(box));
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin >> box[i][j];
            if(box[i][j]==1)
            {
                q.push({i,j});
            }
        }
    }
    bfs();
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(box[i][j]==0)
            {
                cout << "-1";
                return 0;
            }
            if(sum<dist[i][j])
            {
                sum=dist[i][j];
            }
        }
    }
    cout << sum;
    return 0;
}