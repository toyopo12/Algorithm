#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool visited[27][27];
bool good[27][27];

int check;
int arrnum=0;
int arr[10000];

void dfs(int a,int b)
{
    if(visited[a][b]==0 && good[a][b]==1)
    {
        visited[a][b]=1;
        check++;
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
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        string x;
        cin >> x;
        for(int j=0;j<n;j++)
        {
            if(x[j]=='1')
            {
                good[i][j+1]=1;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            dfs(i,j);
            if(check!=0)
            {
                arr[arrnum]=check;
                check=0;
                arrnum++;
            }
        }
    }
    sort(arr,arr+arrnum);
    cout << arrnum << '\n';
    for(int i=0;i<arrnum;i++)
    {
        cout << arr[i] << '\n';
    }
    return 0;
}