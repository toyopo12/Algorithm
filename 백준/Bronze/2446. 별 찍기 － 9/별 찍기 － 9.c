#include <stdio.h>

int main()
{
    int i;
    scanf("%d",&i);
    for(int a=i;a>0;a--)
    {
        for(int b=i-a;b>0;b--)
            printf(" ");
        for(int c=0;c<2*a-1;c++)
            printf("*");
        printf("\n");
    }
    for(int a=2;a<=i;a++)
    {
        for(int b=i-a;b>0;b--)
            printf(" ");
        for(int c=0;c<2*a-1;c++)
            printf("*");
        printf("\n");
    }
    return 0;
}