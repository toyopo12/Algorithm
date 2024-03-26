#include <stdio.h>

int main()
{
    int i;
    scanf("%d",&i);
    for(int b=1;b<=i*2;b++){
        if(b%2==1)
        {
            printf("*");
            for(int a=0;a<(i-1)/2;a++)
            {
                printf(" *");
            }
        }
        else
        {
            for(int a=0;a<i/2;a++)
            {
                printf(" *");
            }
        }
        printf("\n");
    }
    return 0;
}