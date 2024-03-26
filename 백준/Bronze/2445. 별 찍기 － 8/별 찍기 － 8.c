#include <stdio.h>

int main()
{
    int i;
    scanf("%d",&i);
    for(int a=1;a<=i;a++)
    {
        for(int A=0;A<a;A++)
            printf("*");
        for(int B=0;B<2*(i-a);B++)
            printf(" ");
        for(int C=0;C<a;C++)
            printf("*");
        printf("\n");
    }
    for(int a=i-1;a>0;a--)
    {
        for(int D=0;D<a;D++)
            printf("*");
        for(int E=0;E<2*(i-a);E++)
            printf(" ");
        for(int F=0;F<a;F++)
            printf("*");
        printf("\n");
    }
    return 0;
}