#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    if(a==2 && b==18)
    {
        cout << "Special";
    }
    else if(a==2 && b>18)
    {
        cout << "After";
    }
    else if(a==2 && b<18)
    {
        cout << "Before";
    }
    else if(a>2)
    {
        cout << "After";
    }
    else if(a<2)
    {
        cout << "Before";
    }
    return 0;
}