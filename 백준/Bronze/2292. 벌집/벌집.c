#include <stdio.h>
#include <string.h>

int main() {
    int x;
    scanf("%d",&x);
    int d=1,i=0;
    if(x==1) {
        printf("1");
        return 0;
    }
    while(d<x)
    {
        i++;
        d+=6*i;
    }
    printf("%d",i+1);
    return 0;
}