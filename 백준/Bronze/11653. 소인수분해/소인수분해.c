#include <stdio.h>
#include <string.h>

int main()
{
    int x;
    scanf("%d",&x);
    hi:while(x!=1)
    {
        for(int a=2;a<=x;a++)
        {
            if(x%a==0)
            {
                x/=a;
                printf("%d\n",a);
                goto hi;
            }
        }
    }
    return 0;
}