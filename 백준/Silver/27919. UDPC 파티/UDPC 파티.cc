#include <iostream>
#include <string>

using namespace std;

int main()
{
    string x;
    int a=0;
    int b=0;
    cin >> x;
    for(int i=0;i<x.length();i++)
    {
        if(x[i]=='C' || x[i]=='U')
        {
            a++;
        }
        else
        {
            b++;
        }
    }
    if(0<b)
    {
        if(a>(b+1)/2)
        {
            cout << "UDP";
        }
        else
        {
            cout << "DP";
        }
    }
    else
    {
        cout << "U";
    }
    return 0;
}