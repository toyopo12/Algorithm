#include <stdio.h>

int main()
{
    int i;
    scanf("%d",&i);
    for(int a=1;a<=i;a++)
    {
        for(int A=i;A>0;A--)
            printf("*");
        printf("\n");
    }
    return 0;
}