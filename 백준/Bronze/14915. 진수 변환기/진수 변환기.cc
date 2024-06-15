#include <iostream>

using namespace std;

int main()
{
    int count=0;
    int m,n;
    int nn=1;
    cin >> m >> n;
    if(m==0)
    {
        cout << "0";
        return 0;
    }
    while(nn<=m)
    {
        count++;
        nn*=n;
    }
    count--;
    nn/=n;
    while(count--)
    {
        if(m/nn>=10)
        {
            cout << (char)(m/nn-10+'A');
        }
        else
        {
            cout << m/nn;
        }
        m%=nn;
        nn/=n;
    }
    if(m>=10)
    {
        cout << (char)(m-10+'A');
    }
    else
    {
        cout << m;
    }
    return 0;
}