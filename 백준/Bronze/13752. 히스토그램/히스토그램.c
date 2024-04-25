#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int a=0;a<n;a++)
    {
        int N;
        scanf("%d",&N);
        for(int b=0;b<N;b++)
        {
            printf("=");
        }
        printf("\n");
    }
    return 0;
}