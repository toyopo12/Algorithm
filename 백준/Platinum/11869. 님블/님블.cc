#include <iostream>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int hi = 0;
    int x, n;
    cin >> n;
    while(n--){
        cin >> x;
        hi ^= x;
    }
    if(hi) cout << "koosaga";
    else cout << "cubelover";
    return 0;
}