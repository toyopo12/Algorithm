#include <stdio.h>

int main()
{
    int x,h,f;
    scanf("%d",&x);
    for(int p=0;p<x;p++)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        h=(c-1)/a+1;
        f=c%a;
        if(f==0) f = a;
        printf("%d\n", 100 * f + h);
    }
    return 0;
}