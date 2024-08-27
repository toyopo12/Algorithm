#include <iostream>
#include <string>

using namespace std;

int arr[4004][4004];

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string x,y;
    int good=0;
    cin >> x >> y;
    for(int i=1;i<=x.length();i++)
    {
        for(int j=1;j<=y.length();j++)
        {
            if(x[i-1]==y[j-1])
            {
                arr[i][j]=arr[i-1][j-1]+1;
            }
        }
    }
    for(int i=1;i<=x.length();i++)
    {
        for(int j=1;j<=y.length();j++)
        {
            if(good<arr[i][j])
            {
                good=arr[i][j];
            }
        }
    }
    cout << good;
    return 0;
}