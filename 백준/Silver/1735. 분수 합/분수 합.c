#include <stdio.h>
#include <string.h>

int gcd(int a,int b)
{
    while(b!=0)
    {
        int r=a%b;
        a=b;
        b=r;
    }
    return a;
}

int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int n,m;
    if(b>d)
    {
        n=a*d/gcd(b,d)+c*b/gcd(b,d);
        m=d*b/gcd(b,d);
        printf("%d %d",n/gcd(m,n),m/gcd(m,n));
    }
    else
    {
        n=a*d/gcd(d,b)+c*b/gcd(d,b);
        m=d*b/gcd(d,b);
        printf("%d %d",n/gcd(m,n),m/gcd(m,n));
    }
    return 0;
}