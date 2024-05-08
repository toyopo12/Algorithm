#include <stdio.h>

int main()
{
    int a,b,c,d;
    int i=0;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a*d+b<=c*d)
    {
        if(a<=c)
        {
            i=1;
        }
    }
    printf("%d",i);
    return 0;
}