#include <iostream>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int x, n;
    int hello = 0;
    cin >> n;
    while(n--){
        cin >> x;
        hello ^= x;
    }
    if(hello) cout << "koosaga";
    else cout << "cubelover";
    return 0;
}