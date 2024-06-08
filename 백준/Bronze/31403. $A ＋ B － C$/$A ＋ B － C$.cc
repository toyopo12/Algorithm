#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    if(1<=b && b<10)
    {
        cout << a+b-c << '\n' << 10*a+b-c;
    }
    else if(10<=b && b<100)
    {
        cout << a+b-c << '\n' << 100*a+b-c;
    }
    else if(100<=b && b<1000)
    {
        cout << a+b-c << '\n' << 1000*a+b-c;
    }
    else
    {
        cout << a+b-c << '\n' << 10000*a+b-c;
    }
    return 0;
}