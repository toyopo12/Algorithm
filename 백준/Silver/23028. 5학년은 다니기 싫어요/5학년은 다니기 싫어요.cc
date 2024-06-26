#include <iostream>

using namespace std;

int main()
{
    int n,a,b;
    int arr[10][2];
    cin >> n >> a >> b;
    for(int i=0;i<10;i++)
    {
        cin >> arr[i][0] >> arr[i][1];
    }
    for(int i=0;i<8-n;i++)
    {
        if(arr[i][0]>6)
        {
            a+=18;
            b+=18;
        }
        else if(arr[i][0]+arr[i][1]<6)
        {
            a+=arr[i][0]*3;
            b+=(arr[i][0]+arr[i][1])*3;
        }
        else
        {
            a+=arr[i][0]*3;
            b+=18;
        }
    }
    if(a>=66 && b>=130)
    {
        cout << "Nice";
    }
    else
    {
        cout << "Nae ga wae";
    }
    return 0;
}