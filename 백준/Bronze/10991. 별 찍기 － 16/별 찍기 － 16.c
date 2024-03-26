#include <stdio.h>

int main()
{
    int i;
    scanf("%d",&i);
    for(int a=i-1;a>=0;a--)
    {
        for (int A = a; A > 0; A--)
            printf(" ");
        printf("*");
        for(int C=i-a-1;C>0;C--)
            printf(" *");
        printf("\n");
    }
    return 0;
}