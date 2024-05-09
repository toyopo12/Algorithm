#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int a=1;a<=65536;a++)
    {
        if(n<a*a)
        {
            printf("%d",a-1);
            return 0;
        }
    }
    return 0;
}