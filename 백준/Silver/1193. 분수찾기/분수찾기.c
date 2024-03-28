#include <stdio.h>
#include <string.h>

int main() {
    int x;
    int a=1;
    scanf("%d",&x);
    while(x>a)
    {
        x-=a;
        a++;
    }
    if(a%2!=0)
        printf("%d/%d",a-x+1,x);
    else
        printf("%d/%d",x,a-x+1);
    return 0;
}