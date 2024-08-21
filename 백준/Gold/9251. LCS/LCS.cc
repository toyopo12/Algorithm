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
    cin >> x >> y;
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
                arr[i+1][j+1]=max(arr[i][j+1],arr[i+1][j]);
            }
        }
    }
    cout << arr[x.size()][y.size()];
    return 0;
}