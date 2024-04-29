#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int a=0;a<n;a++)
    {
        cin >> arr[a];
    }
    sort(arr,arr+n);
    for(int a=0;a<n;a++)
    {
        cout << arr[a] << '\n';
    }
    return 0;
}