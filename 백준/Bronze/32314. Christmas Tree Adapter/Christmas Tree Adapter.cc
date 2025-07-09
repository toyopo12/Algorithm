#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int a; cin >> a;
    double b, c; cin >> b >> c;
    if (a <= b / c) cout << "1";
    else cout << "0";
    
    return 0;
}