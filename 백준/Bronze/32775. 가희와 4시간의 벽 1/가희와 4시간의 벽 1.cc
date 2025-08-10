#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b; cin >> a >> b;
    if (a <= b) cout << "high speed rail";
    else cout << "flight";
    return 0;
}