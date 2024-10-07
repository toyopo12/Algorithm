#include <iostream>
#include <algorithm>

using namespace std;

int arr[1010][4][4];

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= 3; j++){
            for(int l = 1; l <= 3; l++) arr[i][j][l] = 10000;
        }
    }
    cin >> arr[1][1][1] >> arr[1][2][2] >> arr[1][3][3];
    int a, b, c;
    for(int i = 2; i <= n; i++){
        cin >> a >> b >> c;
        arr[i][1][1] = min(arr[i - 1][2][1], arr[i - 1][3][1]) + a;
        arr[i][2][1] = min(arr[i - 1][1][1], arr[i - 1][3][1]) + b;
        arr[i][3][1] = min(arr[i - 1][1][1], arr[i - 1][2][1]) + c;
        arr[i][1][2] = min(arr[i - 1][2][2], arr[i - 1][3][2]) + a;
        arr[i][2][2] = min(arr[i - 1][1][2], arr[i - 1][3][2]) + b;
        arr[i][3][2] = min(arr[i - 1][1][2], arr[i - 1][2][2]) + c;
        arr[i][1][3] = min(arr[i - 1][2][3], arr[i - 1][3][3]) + a;
        arr[i][2][3] = min(arr[i - 1][1][3], arr[i - 1][3][3]) + b;
        arr[i][3][3] = min(arr[i - 1][1][3], arr[i - 1][2][3]) + c;
    }
    int minhouse = 20000000;
    for(int i = 1; i <= 3; i++){
        for(int j = 1; j <= 3; j++)
            if(i != j) minhouse = min(minhouse, arr[n][i][j]);
    }
    cout << minhouse;
    return 0;
}