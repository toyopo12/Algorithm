#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int i=1;
    while(1)
    {
        int a,b,c;
        int x,y;
        scanf("%d %d %d",&a,&b,&c);
        if(a==0 && b==0 && c==0)
        {
            return 0;
        }
        x=c/b;
        y=c%b;
        if(y>=a)
        {
            printf("Case %d: %d\n",i,x*a+a);
        }
        else
        {
            printf("Case %d: %d\n",i,x*a+y);
        }
        i++;
    }
}