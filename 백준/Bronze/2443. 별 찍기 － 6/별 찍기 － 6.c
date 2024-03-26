#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=t;i>0;i--)
    {
        int x=t-i;
        for(int y=1;y<=x;y++)
        {
            printf(" ");
        }
        for(int z=1;z<=i;z++) {
            printf("*");

        }
        for(int d=1;d<i;d++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}