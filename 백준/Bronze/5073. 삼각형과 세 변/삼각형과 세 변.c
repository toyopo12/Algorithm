#include <stdio.h>
#include <string.h>

int main() {
    int a,b,c;
    while(1){
        scanf("%d %d %d", &a, &b, &c);
        if(a==0&&b==0&&c==0)
            return 0;
        else if (a == b && b == c) {
            printf("Equilateral");
        } else if (a == b && b != c) {
            if (b > c) {
                printf("Isosceles");
            } else if (b < c) {
                if (a + b <= c)
                    printf("Invalid");
                else
                    printf("Isosceles");
            }
        } else if (a == c && a != b) {
            if (a > b) {
                printf("Isosceles");
            } else if (a < b) {
                if (a + c <= b)
                    printf("Invalid");
                else
                    printf("Isosceles");
            }
        } else if (b == c && b != a) {
            if (b > a) {
                printf("Isosceles");
            } else if (b < a) {
                if (b + c <= a)
                    printf("Invalid");
                else
                    printf("Isosceles");
            }
        } else {
            if (a < b < c) {
                if (c >= a + b)
                    printf("Invalid");
                else
                    printf("Scalene");
            } else if (a < c < b) {
                if (b >= a + c)
                    printf("Invalid");
                else
                    printf("Scalene");
            } else if (b < a < c) {
                if (c >= a + b)
                    printf("Invalid");
                else
                    printf("Scalene");
            } else if (b < c < a) {
                if (a >= b + c)
                    printf("Invalid");
                else
                    printf("Scalene");
            } else if (c < a < b) {
                if (b >= a + c)
                    printf("Invalid");
                else
                    printf("Scalene");
            } else if (c < b < a) {
                if (a >= b + c)
                    printf("Invalid");
                else
                    printf("Scalene");
            }
        }
        printf("\n");
    }
}