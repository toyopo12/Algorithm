#include <stdio.h>

int main()
{
    int i;
    scanf("%d",&i);
    for(int a=i-1;a>=0;a--)
    {
        int B=2*(i-a)-3;
        if(a==i-1) {
            for (int A = 0; A < i - 1; A++) {
                printf(" ");
            }
            printf("*\n");
        }
        else if(a==0) {
            for (int D = 0; D < 2 * i - 1; D++)
                printf("*");
        }
        else if(a!=0 && a!=i-1) {
            for (int A = a; A > 0; A--)
                printf(" ");
            printf("*");
            for(int C=0;C<B;C++)
                printf(" ");
            printf("*\n");
        }
    }
    return 0;
}