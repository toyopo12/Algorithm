#include <iostream>

using namespace std;

int arr[77][77][77];

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cin.tie(nullptr);
    int a, b, c;
    for(int i = 0; i <= 70; i++){
        for(int j = 0; j <= 70; j++){
            for(int l = 0; l <= 70; l++){
                if(i <= 50 || j <= 50 || l <= 50) arr[i][j][l] = 1;
                else if(i < j && j < l) arr[i][j][l] = arr[i][j][l - 1] + arr[i][j - 1][l - 1] - arr[i][j - 1][l];
                else arr[i][j][l] = arr[i - 1][j][l] + arr[i - 1][j - 1][l] + arr[i - 1][j][l - 1] - arr[i - 1][j - 1][l - 1];
            }
        }
    }
    while(1){
        cin >> a >> b >> c;
        if(a == -1 && b == -1 && c == -1) break;
        cout << "w(" << a << ", " << b << ", " << c << ") = ";
        if(a <= 0 || b <= 0 || c <= 0) cout << "1" << '\n';
        else if(a > 20 || b > 20 || c > 20) cout << arr[70][70][70] << '\n';
        else cout << arr[a + 50][b + 50][c + 50] << '\n';
    }
    return 0;
}