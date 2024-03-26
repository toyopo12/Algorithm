#include <stdio.h>

int main()
{
    int x;
    scanf("%d",&x);
    for(int a=x;a>0;a--)
    {
        for(int c=0;c<x-a;c++)
            printf(" ");
        for(int b=0;b<a;b++)
            printf("*");
        printf("\n");
    }
    return 0;
}