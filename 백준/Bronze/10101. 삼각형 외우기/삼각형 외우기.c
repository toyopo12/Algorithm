#include <stdio.h>
#include <string.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a+b+c==180)
    {
        if(a==60 && b==60)
            printf("Equilateral");
        else if(a==c)
            printf("Isosceles");
        else if(a==b)
            printf("Isosceles");
        else if(b==c)
            printf("Isosceles");
        else
            printf("Scalene");
    }
    else
        printf("Error");
    return 0;
}