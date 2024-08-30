#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int arr[1010][1010];

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string x,y;
    string good="";
    cin >> x >> y;
    int a=x.size();
    int b=y.size();
    for(int i=0;i<x.size();i++)
    {
        for(int j=0;j<y.size();j++)
        {
            if(x[i]==y[j])
            {
                arr[i+1][j+1]=arr[i][j]+1;
            }
            else
            {
                if(arr[i][j+1]<arr[i+1][j])
                {
                    arr[i+1][j+1]=arr[i][j+1];

                }
                arr[i+1][j+1]=max(arr[i][j+1],arr[i+1][j]);
            }
        }
    }
    while(a>=1 && b>=1)
    {
        if(arr[a-1][b]<arr[a][b] && arr[a-1][b]==arr[a-1][b-1] && arr[a-1][b-1]==arr[a][b-1])
        {
            good+=y[b-1];
            a--;
            b--;
        }
        else if(arr[a][b-1]<arr[a][b] && arr[a][b]==arr[a-1][b])
        {
            a--;
        }
        else
        {
            b--;
        }
    }
    reverse(good.begin(),good.end());
    if(arr[x.size()][y.size()]==0)
    {
        cout << "0";
    }
    else
    {
        cout << arr[x.size()][y.size()] << '\n' << good;
    }
    return 0;
}