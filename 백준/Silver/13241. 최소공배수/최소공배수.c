#include <stdio.h>

long long gcd(long long a,long long b)
{
    while(b!=0)
    {
        long long r=a%b;
        a=b;
        b=r;
    }
    return a;
}

int main()
{
    long long a,b;
    scanf("%lld %lld",&a,&b);
    if(a>b)
    {
        printf("%lld",a/gcd(a,b)*b);
    }
    else if(a<b)
    {
        printf("%lld",b/gcd(b,a)*a);
    }
    else
    {
        printf("%lld",a);
    }
    return 0;
}