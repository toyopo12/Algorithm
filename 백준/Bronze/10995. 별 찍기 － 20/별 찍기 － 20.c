#include <stdio.h>

int main()
{
    int i;
    scanf("%d",&i);
    for(int b=1;b<=i;b++){
        if(b%2==0)
        {
            for(int a=0;a<i;a++)
            {
                printf(" *");
            }
        }
        else
        {
            for(int a=0;a<i;a++)
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}