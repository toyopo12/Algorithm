#include <stdio.h>

int main()
{
    int i;
    scanf("%d",&i);
    for(int a=1;a<=i;a++)
    {
        for(int A=a;A>0;A--)
            printf("*");
        printf("\n");
    }
    for(int a=i-1;a>0;a--)
    {
        for(int A=a;A>0;A--)
            printf("*");
        printf("\n");
    }
    return 0;
}