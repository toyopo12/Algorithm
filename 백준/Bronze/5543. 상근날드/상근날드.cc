#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[5];
    for(int i=0;i<5;i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+3);
    if(arr[3]<arr[4])
    {
        cout << arr[0]+arr[3]-50;
    }
    else
    {
        cout << arr[0]+arr[4]-50;
    }
    return 0;
}