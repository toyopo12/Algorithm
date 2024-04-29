#include <stdio.h>

int gcd(int a, int b)
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
    int n;
    scanf("%d",&n);
    for(int a=0;a<n;a++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        if(a<b)
        {
            printf("%d\n",b/gcd(b,a)*a);
        }
        else if(a>b)
        {
            printf("%d\n",a/gcd(a,b)*b);
        }
        else if(a==b)
        {
            printf("%d\n",a);
        }
    }
    return 0;
}