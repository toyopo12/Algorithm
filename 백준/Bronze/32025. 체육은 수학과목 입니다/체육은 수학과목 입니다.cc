#include <iostream>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int h,w;
    cin >> h >> w;
    if(h>w)
    {
        cout << 50*w;
    }
    else
    {
        cout << 50*h;
    }
    return 0;
}