#include <stdio.h>

int main()
{
    int i;
    scanf("%d",&i);
    for(int a=1;a<i;a++)
    {
        for(int b=i-a;b>0;b--) {
            printf(" ");
        }
        for(int c=0;c<a;c++) {
            printf("*");
        }
        printf("\n");
    }
    for(int a=i;a>0;a--)
    {
        for(int b=i-a;b>0;b--)
            printf(" ");
        for(int c=0;c<a;c++)
            printf("*");
        printf("\n");
    }
    return 0;
}