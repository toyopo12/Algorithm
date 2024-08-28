/* #include <iostream> //1577번

using namespace std;

long long int arr[110][110];
int brr[110][110]; // 얘가 문제임 ㅇㅇ;;;;;;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m,k;
    int count=2;
    cin >> n >> m >> k;
    arr[0][0]=1;
    while(k--) // 지나간 곳 설정 잘하기
    {
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        if(brr[a][b]!=0)
        {
            brr[c][d]=brr[a][b];
        }
        else
        {
            brr[a][b]=count;
            brr[c][d]=count;
            count+=2;
        }
    }
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(brr[j][i]>=2)
            {
                if(brr[j][i+1]!=brr[j][i])
                {
                    arr[j][i+1]+=arr[j][i];
                }
                if(brr[j+1][i]!=brr[j][i])
                {
                    arr[j+1][i]+=arr[j][i];
                }
            }
            else
            {
                arr[j][i+1]+=arr[j][i];
                arr[j+1][i]+=arr[j][i];
            }
        }
    }
    cout << arr[n][m];
    return 0;
} */

#include <iostream>
#include <queue>
using namespace std;

int dx[4]={0,0,1,-1};
int dy[4]={1, -1, 0, 0};
int miro[111][111];
int dist[111][111];


void bfs()
{
    queue<pair<int,int>> q;
    dist[1][1]=1;
    q.push({1,1});
    while(!q.empty())
    {
        auto [x,y] = q.front();
        q.pop();
        for(int i=0;i<4;i++){
            int nx=x+dx[i];
            int ny=y+dy[i];
            if(!miro[nx][ny]) continue;
            q.push({nx,ny});
            dist[nx][ny]=dist[x][y]+1;
            miro[nx][ny]=0;
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
    for(int i=1;i<=n;i++)
    {
        string str;
        cin >> str;
        for(int j=0;j<m;j++)
        {
            miro[i][j+1]=(str[j]=='1');
        }
    }
    bfs();
    cout << dist[n][m];
    return 0;
}