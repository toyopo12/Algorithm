#include <iostream>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    int arr[10]={1,2,4,7,13,24,44,81,149,274};
    while(t--)
    {
        int x;
        cin >> x;
        cout << arr[x-1] << '\n';
    }
    return 0;
}