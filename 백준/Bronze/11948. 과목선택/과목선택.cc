#include <iostream>

using namespace std;

int main()
{
    int sum=0;
    int amin=100;
    int bmin=100;
    for(int i=0;i<4;i++)
    {
        int x;
        cin >> x;
        if(amin>x)
        {
            amin=x;
        }
        sum+=x;
    }
    for(int i=0;i<2;i++)
    {
        int x;
        cin >> x;
        if(bmin>x)
        {
            bmin=x;
        }
        sum+=x;
    }
    cout << sum-amin-bmin;
    return 0;
}