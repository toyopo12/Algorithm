#include <stdio.h>
#include <string.h>

int main() {
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if (a == b && b == c)
    {
        printf("%d",3*a);
    }
    else if (a == b && b != c)
    {
        if (b > c)
        {
            printf("%d",a+b+c);
        }
        else if (b < c)
        {
            if (a + b <= c) {
                while (a + b <= c) {
                    c--;
                }
                printf("%d",a+b+c);
            }
            else
                printf("%d",a+b+c);
        }
    }
    else if (a == c && b != c)
    {
        if (a > b)
        {
            printf("%d",a+b+c);
        }
        else if (a < b)
        {
            if (a + c <= b) {
                while (a + c <= b) {
                    b--;
                }
                printf("%d",a+b+c);
            }
            else
                printf("%d",a+b+c);
        }
    }
    else if (b == c && b != a)
    {
        if (b > a)
        {
            printf("%d",a+b+c);
        }
        else if (b < a)
        {
            if (b + c <= a) {
                while (b + c <= a) {
                    a--;
                }
                printf("%d",a+b+c);
            }
            else
                printf("%d",a+b+c);
        }
    }
    else
    {
            if (a < b && b < c)
            {
                if (c >= a + b) {
                    while(c >= a + b)
                        c--;
                    printf("%d",a+b+c);
                }
                else
                    printf("%d",a+b+c);
            }
            else if (a < c && c < b)
            {
                if (b >= a + c) {
                    while(b >= a + c)
                        b--;
                    printf("%d",a+b+c);
                }
                else
                    printf("%d",a+b+c);
            }
            else if (b < a && a < c)
            {
                if (c >= a + b) {
                    while(c >= a + b)
                        c--;
                    printf("%d",a+b+c);
                }
                else
                    printf("%d",a+b+c);
            }
            else if (b < c && c < a)
            {
                if (a >= b + c) {
                    while(a >= b + c)
                        a--;
                    printf("%d",a+b+c);
                }
                else
                    printf("%d",a+b+c);
            }
            else if (c < a && a < b)
            {
                if (b >= a + c)
                {
                    while(b >= a + c)
                        b--;
                    printf("%d",a+b+c);
                }
                else
                    printf("%d",a+b+c);
            }
            else if (c < b && b < a)
            {
                if (a >= c + b) {
                    while(a >= c + b)
                        a--;
                    printf("%d",a+b+c);
                }
                else
                    printf("%d",a+b+c);
            }
    }
    return 0;
}