#include <iostream>

using namespace std;

int main()
{
    int sum=0;
    for(int i=0;i<10;i++)
    {
        int x;
        cin >> x;
        if(x==1)
        {
            sum++;
        }
        else if(x==2)
        {
            sum+=2;
        }
        else if(x==3)
        {
            sum--;
        }
    }
    if(sum<0)
    {
        if(-sum%4==0)
        {
            cout << "N";
        }
        else if(-sum%4==1)
        {
            cout << "W";
        }
        else if(-sum%4==2)
        {
            cout << "S";
        }
        else if(-sum%4==3)
        {
            cout << "E";
        }
    }
    else
    {
        if(sum%4==0)
        {
            cout << "N";
        }
        else if(sum%4==1)
        {
            cout << "E";
        }
        else if(sum%4==2)
        {
            cout << "S";
        }
        else if(sum%4==3)
        {
            cout << "W";
        }
    }
    return 0;
}