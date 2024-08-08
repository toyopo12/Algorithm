#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int x,y;
        cin >> x >> y;
        cout << 2+y-x << '\n';
    }
    return 0;
}