#include <iostream>

using namespace std;

int main()
{
    int a=100;
    int b=100;
    int n;
    cin >> n;
    while(n--)
    {
        int x,y;
        cin >> x >> y;
        if(x<y)
        {
            a-=y;
        }
        else if(x>y)
        {
            b-=x;
        }
    }
    cout << a << '\n' << b;
    return 0;
}