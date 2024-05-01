#include <stdio.h>

int main()
{
    int n;
    int sum=1;
    scanf("%d",&n);
    for(int a=0;a<n;a++)
    {
        sum*=2;
    }
    printf("%d",sum);
    return 0;
}