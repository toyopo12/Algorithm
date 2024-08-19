#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<pair<int,int>> good;
int arr[101][100010];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k;
    cin >> n >> k;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin >> x >> y;
        good.push_back({x,y});
    }
    for(int j=0;j<=k;j++)
    {
        if(j>=good[0].first)
        {
            arr[0][j]=good[0].second;
        }
    }
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<=k;j++)
        {
            if(j>=good[i].first)
            {
                arr[i][j]=max(arr[i-1][j],good[i].second+arr[i-1][j-good[i].first]);
            }
            else
            {
                arr[i][j]=arr[i-1][j];
            }
        }
    }
    cout << arr[n-1][k];
    return 0;
}