#include <iostream>

using namespace std;

int main()
{
    int arr[105];
    int count=1;
    int n,x;
    cin >> n >> x;
    for(int i=1;i<=n;i++)
    {
        cin >> arr[i];
    }
    while(1)
    {
        if(arr[count]<x)
        {
            break;
        }
        if(count==n)
        {
            count=1;
        }
        else
        {
            count++;
        }
        x++;
    }
    cout << count;
    return 0;
}