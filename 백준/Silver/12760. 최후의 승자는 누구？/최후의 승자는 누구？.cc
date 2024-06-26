#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[110][110];
    int score[110]={0};
    int n,m;
    cin >> n >> m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> arr[i][j];
        }
        sort(arr[i],arr[i]+m);
    }
    for(int j=0;j<m;j++)
    {
        int max=0;
        for(int i=0;i<n;i++)
        {
            if(max<arr[i][j])
            {
                max=arr[i][j];
            }
        }
        for(int i=0;i<n;i++)
        {
            if(max==arr[i][j])
            {
                score[i]++;
            }
        }
    }
    int mmax=0;
    for(int i=0;i<n;i++)
    {
        if(mmax<score[i])
        {
            mmax=score[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(mmax==score[i])
        {
            cout << i+1 << " ";
        }
    }
    return 0;
}