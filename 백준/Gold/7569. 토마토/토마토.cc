#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

int dx[6]={0,0,1,-1,0,0};
int dy[6]={1,-1,0,0,0,0};
int dz[6]={0,0,0,0,1,-1};
int box[110][110][110];
int dist[110][110][110];

queue<pair<pair<int,int>,int>> q;

void bfs()
{
    while(!q.empty())
    {
        auto [x,y] = q.front().first;
        int z=q.front().second;
        q.pop();
        for(int i=0;i<6;i++){
            int nx=x+dx[i];
            int ny=y+dy[i];
            int nz=z+dz[i];
            if(box[nx][ny][nz]==0)
            {
                q.push({{nx,ny},nz});
                dist[nx][ny][nz]=dist[x][y][z]+1;
                box[nx][ny][nz]=-1;
            }
        }
    }
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m,h;
    int sum=0;
    cin >> m >> n >> h;
    memset(box,-1,sizeof(box));
    for(int i=1;i<=h;i++)
    {
        for(int j=1;j<=n;j++)
        {
            for(int l=1;l<=m;l++)
            {
                cin >> box[j][l][i];
                if(box[j][l][i]==1)
                {
                    q.push({{j,l},i});
                }
            }
        }
    }
    bfs();
    for(int i=1;i<=h;i++)
    {
        for(int j=1;j<=n;j++)
        {
            for(int l=1;l<=m;l++)
            {
                if(box[j][l][i]==0)
                {
                    cout << "-1";
                    return 0;
                }
                if(sum<dist[j][l][i])
                {
                    sum=dist[j][l][i];
                }
            }
        }
    }
    cout << sum;
    return 0;
}