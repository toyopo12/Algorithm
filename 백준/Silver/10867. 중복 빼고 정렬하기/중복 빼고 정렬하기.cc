#include <iostream>

using namespace std;

int arr[2020];

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cin.tie(nullptr);
    int n, x;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        arr[x + 1000]++;
    }
    for(int i = 0; i < 2002; i++) if(arr[i] != 0) cout << i - 1000 << " ";
    return 0;
}