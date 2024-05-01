#include <stdio.h>

int main()
{
    int H,W,N,M;
    scanf("%d %d %d %d",&H,&W,&N,&M);
    printf("%d",(1+((H-1)/(N+1)))*(1+((W-1)/(M+1))));
    return 0;
}