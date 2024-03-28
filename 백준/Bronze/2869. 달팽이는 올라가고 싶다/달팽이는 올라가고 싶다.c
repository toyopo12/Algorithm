#include <stdio.h>
#include <string.h>

int main() {
    int A,B,V;
    scanf("%d %d %d",&A,&B,&V);
    int x=V-A,y=A-B;
    if(x%y!=0)
        printf("%d",x/y+2);
    else
        printf("%d",x/y+1);
    return 0;
}