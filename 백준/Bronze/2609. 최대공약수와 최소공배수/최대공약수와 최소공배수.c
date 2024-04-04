#include <stdio.h>

int main()
{
    int a,b;
    int yak=0;
    scanf("%d %d",&a,&b);
    if(a==b) {
        printf("%d\n%d", a, a);
        return 0;
    }
    else if(a>b)
    {
        for (int n = 1; n <= a-b; n++)
        {
            if(a%n==0 && b%n==0)
                yak=n;
        }
    }
    else if(a<b)
    {
        for (int n = 1; n <= b-a; n++)
        {
            if(a%n==0 && b%n==0)
                yak=n;
        }
    }
    printf("%d\n%d",yak,b*(a/yak));
}