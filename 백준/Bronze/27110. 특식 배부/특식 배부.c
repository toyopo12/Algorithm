#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a,b,c;
    int sum=0;
    scanf("%d %d %d",&a,&b,&c);
    if(a<n)
    {
        sum+=a;
    }
    else if(a>=n)
    {
        sum+=n;
    }
    if(b<n)
    {
        sum+=b;
    }
    else if(b>=n)
    {
        sum+=n;
    }
    if(c<n)
    {
        sum+=c;
    }
    else if(c>=n)
    {
        sum+=n;
    }
    printf("%d",sum);
    return 0;
}