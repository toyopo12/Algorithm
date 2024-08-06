#include <iostream>

using namespace std;

int main()
{
    int good=0;
    int now=0;
    for(int i=0;i<10;i++)
    {
        int x,y;
        cin >> x >> y;
        now-=x;
        now+=y;
        if(good<now)
        {
            good=now;
        }
    }
    cout << good;
    return 0;
}