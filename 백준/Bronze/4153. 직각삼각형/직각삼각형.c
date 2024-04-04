#include <stdio.h>

int main()
{
    int a,b,c;
    while(1)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a==0)
            return 0;
        else if(a<b && c<b)
        {
            if(b*b==a*a+c*c)
                printf("right");
            else
                printf("wrong");
        }
        else if(a<c && b<c)
        {
            if(c*c==a*a+b*b)
                printf("right");
            else
                printf("wrong");
        }
        else if(b<a && c<a)
        {
            if(a*a==c*c+b*b)
                printf("right");
            else
                printf("wrong");
        }
        printf("\n");
    }
}