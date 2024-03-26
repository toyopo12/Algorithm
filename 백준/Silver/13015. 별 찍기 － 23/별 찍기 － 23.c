#include <stdio.h>

int main()
{
    int i;
    scanf("%d",&i);
    for(int a=0;a<2*i;a++)
    {
        if(a==0 || a==2*i-1)
        {
            for(int b=0;b<i;b++)
                printf("*");
            for(int c=0;c<2*i-3;c++)
                printf(" ");
            for(int d=0;d<i;d++)
                printf("*");
            printf("\n");
        }
        else if(a==i-1)
        {
            for(int b=0;b<i-1;b++)
                printf(" ");
            printf("*");
            for(int b=0;b<i-2;b++)
                printf(" ");
            printf("*");
            for(int b=0;b<i-2;b++)
                printf(" ");
            printf("*\n");
        }
        else
        {
            if(a<i) {
                for (int b = 0; b < a; b++)
                    printf(" ");
                printf("*");
                for (int b = 0; b < i - 2; b++)
                    printf(" ");
                printf("*");
                for (int c = 0; c < 2 * (i - a) - 3; c++)
                    printf(" ");
                printf("*");
                for (int b = 0; b < i - 2; b++)
                    printf(" ");
                printf("*\n");
            }
            else if(a>i)
            {
                for (int b = 2*i-a-1; b > 0; b--)
                    printf(" ");
                printf("*");
                for (int b = 0; b < i - 2; b++)
                    printf(" ");
                printf("*");
                for (int c = 2 * (a-i) - 1; c > 0; c--)
                    printf(" ");
                printf("*");
                for (int b = 0; b < i - 2; b++)
                    printf(" ");
                printf("*\n");
            }
        }
    }
    return 0;
}