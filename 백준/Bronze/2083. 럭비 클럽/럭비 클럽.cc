#include <iostream>
#include <string>

using namespace std;

int main()
{
    while(1)
    {
        string x;
        int a,b;
        cin >> x >> a >> b;
        if(x=="#" && a==0 && b==0)
        {
            break;
        }
        if(a>17 || b>=80)
        {
            cout << x << " Senior\n";
        }
        else
        {
            cout << x << " Junior\n";
        }
    }
    return 0;
}