#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
    int n;
    long long A,B,C;
    long long aa,bb,cc;
    cin >> n >> aa >> bb >> cc;
    n--;
    while(n--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        A=min(bb,cc)+a;
        B=min(aa,cc)+b;
        C=min(aa,bb)+c;
        aa=A;
        bb=B;
        cc=C;
    }
    long long max=INT_MAX;
    if(max>A)
    {
        max=A;
    }
    if(max>B)
    {
        max=B;
    }
    if(max>C)
    {
        max=C;
    }
    cout << max;
    return 0;
}