#include <stdio.h>
#include <string.h>

int main()
{
    int x;
    int i=0,sum=0;
    while(1)
    {
        scanf("%d", &x);
        if (x == -1)
            return 0;
        int arr[x];

        for (int A = 1; A < x; A++)
        {
            if (x % A == 0)
            {
                i++;
                arr[i] = A;
                sum += A;
            }
        }
        if (x == sum)
        {
            printf("%d = %d ", x, arr[1]);
            for (int B = 2; B <= i; B++)
                printf("+ %d ", arr[B]);
            printf("\n");
        }
        else
            printf("%d is NOT perfect.\n", x);
        sum=0;
        i=0;
    }
    return 0;
}