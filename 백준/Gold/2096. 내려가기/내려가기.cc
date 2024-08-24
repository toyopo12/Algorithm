#include <iostream>
#include <algorithm>

using namespace std;

int arr[3][2];
int brr[3][2];

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int a,b,c;
        cin >> a >> b >> c;
        arr[0][1]=max(arr[0][0],arr[1][0])+a;
        arr[1][1]=max(max(arr[0][0],arr[1][0]),max(arr[1][0],arr[2][0]))+b;
        arr[2][1]=max(arr[1][0],arr[2][0])+c;
        brr[0][1]=min(brr[0][0],brr[1][0])+a;
        brr[1][1]=min(min(brr[0][0],brr[1][0]),min(brr[1][0],brr[2][0]))+b;
        brr[2][1]=min(brr[1][0],brr[2][0])+c;
        for(int j=0;j<3;j++)
        {
            arr[j][0]=arr[j][1];
            brr[j][0]=brr[j][1];
        }
    }
    cout << max(max(arr[0][0],arr[1][0]),max(arr[1][0],arr[2][0])) << " " << min(min(brr[0][0],brr[1][0]),min(brr[1][0],brr[2][0]));
    return 0;
}