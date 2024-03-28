#include <stdio.h>
#include <string.h>

int main()
{
    int x;
    int i=0,d=0;
    scanf("%d",&x);
    for(int a=0;a<x;a++)
    {
        int y;
        scanf("%d",&y);
        for(int b=1;b<=y;b++)
        {
            if(y%b==0)
                i++;
        }
        if(i==2)
            d++;
        i=0;
    }
    printf("%d",d);
    return 0;
}