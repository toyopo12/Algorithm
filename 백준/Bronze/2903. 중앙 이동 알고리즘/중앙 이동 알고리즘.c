#include <stdio.h>
#include <string.h>

int main() {
    int x;
    scanf("%d",&x);
    int i=1;
    for(int a=0;a<x;a++)
        i*=2;
    printf("%d",(i+1)*(i+1));
    return 0;
}