#include <iostream>

using namespace std;

int arr[1010];

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        if(i >= 100){
            int check = i;
            int one = check % 10;
            check /= 10;
            int two = check % 10;
            check /= 10;
            if(check + one == 2 * two) arr[i] = arr[i - 1] + 1;
            else arr[i] = arr[i - 1];
        }
        else arr[i] = i;
    }
    if(n == 1000) cout << arr[999];
    else cout << arr[n];
    return 0;
}