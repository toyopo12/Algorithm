#include <iostream>

using namespace std;

long long arr[22][110];

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,hi;
    cin >> n >> hi;
    arr[hi][1] = 1;
    for(int i = 2; i < n; i++){
        int x;
        cin >> x;
        for(int j = 0; j <= 20; j++){
            if(j - x >= 0) arr[j - x][i] += arr[j][i - 1];
            if(j + x <= 20) arr[j + x][i] += arr[j][i - 1];
        }
    }
    int finish;
    cin >> finish;
    cout << arr[finish][n - 1];
    return 0;
}