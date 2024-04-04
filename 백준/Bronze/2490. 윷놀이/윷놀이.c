#include <stdio.h>
#include <string.h>

int main()
{
    int n=0;
    for(int A=0;A<3;A++)
    {
        for (int a = 0; a < 4; a++)
        {
            int x;
            scanf("%d", &x);
            if (x == 0)
                n++;
        }
        switch (n)
        {
            case 0:
                printf("E");
                break;
            case 1:
                printf("A");
                break;
            case 2:
                printf("B");
                break;
            case 3:
                printf("C");
                break;
            case 4:
                printf("D");
                break;
        }
        printf("\n");
        n=0;
    }
    return 0;
}