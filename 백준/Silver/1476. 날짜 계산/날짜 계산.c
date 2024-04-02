#include <stdio.h>
#include <string.h>

int main()
{
    int E,S,M;
    int a=1,b=1,c=1,i=0;
    scanf("%d %d %d",&E,&S,&M);
    while(1)
    {

        i++;
        if(a==E && b==S && c==M)
        {
            printf("%d",i);
            return 0;
        }
        a++;
        b++;
        c++;
        if(a==16)
            a=1;
        if(b==29)
            b=1;
        if(c==20)
            c=1;
    }
}