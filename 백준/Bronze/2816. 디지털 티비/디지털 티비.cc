#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    int one;
    int two;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        string x;
        cin >> x;
        if(x=="KBS1")
        {
            one=i;
        }
        else if(x=="KBS2")
        {
            two=i;
        }
    }
    if(one<two)
    {
        for(int j=1;j<one;j++)
        {
            cout << "1";
        }
        for(int j=1;j<one;j++)
        {
            cout << "4";
        }
        for(int j=1;j<two;j++)
        {
            cout << "1";
        }
        for(int j=1;j<two-1;j++)
        {
            cout << "4";
        }
    }
    else
    {
        for(int j=1;j<one;j++)
        {
            cout << "1";
        }
        for(int j=1;j<one;j++)
        {
            cout << "4";
        }
        for(int j=1;j<two+1;j++)
        {
            cout << "1";
        }
        for(int j=1;j<two;j++)
        {
            cout << "4";
        }
    }
    return 0;
}