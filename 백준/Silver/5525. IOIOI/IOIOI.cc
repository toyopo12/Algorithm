#include <iostream>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    int sum=0;
    int count=0;
    bool good=1;
    cin >> n >> m;
    while(m--)
    {
        char x;
        cin >> x;
        if(x=='I')
        {
            if(good)
            {
                good=0;
                count++;
                if(count>=2*n+1)
                {
                    sum++;
                }
            }
            else
            {
                good=0;
                count=1;
            }
        }
        else
        {
            if(good)
            {
                count=0;
                good=1;
            }
            else
            {
                good=1;
                count++;
            }
        }
    }
    cout << sum;
    return 0;
}