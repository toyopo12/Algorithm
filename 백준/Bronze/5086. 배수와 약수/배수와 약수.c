#include <stdio.h>
#include <string.h>

int main() {
    int a,b;
    for(int A=0;A<10000;A++)
    {
        scanf("%d %d",&a,&b);
        if (a == 0 && b == 0)
            return 0;
        else if (a % b == 0) {
            printf("multiple\n");
        } else if (b % a == 0) {
            printf("factor\n");
        } else
            printf("neither\n");
    }
}