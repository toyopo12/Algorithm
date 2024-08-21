#include <iostream>

using namespace std;

int good;

bool visited[52][52];
bool check[52][52];

void dfs(int a,int b)
{
    if(visited[a][b]==0 && check[a][b]==1)
    {
        good++;
        visited[a][b]=1;
        dfs(a-1,b);
        dfs(a,b-1);
        dfs(a+1,b);
        dfs(a,b+1);
    }
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int count=0;
        int m,n,k;
        cin >> m >> n >> k;
        while(k--)
        {
            int x,y;
            cin >> x >> y;
            check[y+1][x+1]=1;
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                dfs(i,j);
                if(good!=0)
                {
                    count++;
                    good=0;
                }
            }
        }
        cout << count << '\n';
        for(int i=0;i<52;i++)
        {
            for(int j=0;j<52;j++)
            {
                check[i][j]=0;
                visited[i][j]=0;
            }
        }
    }
    return 0;
}