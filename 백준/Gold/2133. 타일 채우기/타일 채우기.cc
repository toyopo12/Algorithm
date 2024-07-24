#include <iostream>

using namespace std;

long long arr[31][5];

int main()
{
    int n;
    cin >> n;
    if(n%2==0)
    {
        arr[1][2]=1;
        arr[1][3]=1;
        arr[2][0]=1;
        arr[2][1]=1;
        arr[2][4]=3;
        for(int i=3;i<=30;i++)
        {
            arr[i][0]=arr[i-1][3];
            arr[i][1]=arr[i-1][2];
            arr[i][2]=arr[i-1][4]+arr[i-1][1];
            arr[i][3]=arr[i-1][4]+arr[i-1][0];
            arr[i][4]=arr[i][0]+arr[i][1]+arr[i-2][4];
        }
        cout << arr[n][4];
    }
    else
    {
        cout << "0";
    }
    return 0;
}