#include <iostream>

using namespace std;

int main()
{
    char hi[11][11];
    int Bx,By;
    int Lx,Ly;
    int Rx,Ry;
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            cin >> hi[j][i];
            if(hi[j][i]=='B')
            {
                Bx=j;
                By=i;
            }
            else if(hi[j][i]=='L')
            {
                Lx=j;
                Ly=i;
            }
            else if(hi[j][i]=='R')
            {
                Rx=j;
                Ry=i;
            }
        }
    }
    if(Bx==Lx && Lx==Rx)
    {
        if(By<Ry && Ry<Ly || By>Ry && Ry>Ly)
        {
            cout << abs(Ly-By)+1;
        }
        else
        {
            cout << abs(Lx-Bx)+abs(Ly-By)-1;
        }
    }
    else if(By==Ly && Ly==Ry)
    {
        if(Bx<Rx && Rx<Lx || Bx>Rx && Rx>Lx)
        {
            cout << abs(Lx-Bx)+1;
        }
        else
        {
            cout << abs(Lx-Bx)+abs(Ly-By)-1;
        }
    }
    else
    {
        cout << abs(Lx-Bx)+abs(Ly-By)-1;
    }
    return 0;
}