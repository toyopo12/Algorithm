#include <iostream>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long x;
    cin >> x;
    x %= 5;
    if(x == 1 || x == 3 || x == 4) cout << "SK";
    else cout << "CY";
    return 0;
}