#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>=b)
    {
        printf("%d",b/2);
    }
    else
    {
        printf("%d",a/2);
    }
    return 0;
}