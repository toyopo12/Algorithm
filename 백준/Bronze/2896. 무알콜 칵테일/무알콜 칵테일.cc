#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    float A,B,C;
    float i,j,k;
    float da,db,dc;
    float min;
    cin >> A >> B >> C >> i >> j >> k;
    da=A/i;
    db=B/j;
    dc=C/k;
    if(da<db)
    {
        if(dc<da)
        {
            min=dc;
        }
        else
        {
            min=da;
        }
    }
    else
    {
        if(dc<db)
        {
            min=dc;
        }
        else
        {
            min=db;
        }
    }
    cout.precision(7);
    cout << (da-min)*i << " " << (db-min)*j << " " << (dc-min)*k;
    return 0;
}