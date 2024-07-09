#include <iostream>

using namespace std;

int main()
{
    long long n,count;
    cin >> n >> count;
    if(n==1)
    {
        cout << 8*count;
    }
    else if(n==2)
    {
        if(count%2==0)
        {
            cout << 4*count+1;
        }
        else
        {
            cout << 4*count+3;
        }
    }
    else if(n==3)
    {
        if(count%2==0)
        {
            cout << 4*count+2;
        }
        else
        {
            cout << 4*count+2;
        }
    }
    else if(n==4)
    {
        if(count%2==0)
        {
            cout << 4*count+3;
        }
        else
        {
            cout << 4*count+1;
        }
    }
    else if(n==5)
    {
        cout << 8*count+4;
    }
    return 0;
}