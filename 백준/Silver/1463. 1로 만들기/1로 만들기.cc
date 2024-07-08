#include <iostream>

using namespace std;

int minnum=1000000;

void good(int x,int count)
{
    if(count<minnum)
    {
        if(x==1)
        {
            minnum=count;
        }
        else
        {
            if(x%3==0)
            {
                good(x/3,count+1);
            }
            if(x%2==0)
            {
                good(x/2,count+1);
            }
            good(x-1,count+1);
        }
    }
}

int main()
{
    int n;
    cin >> n;
    good(n,0);
    cout << minnum;
    return 0;
}