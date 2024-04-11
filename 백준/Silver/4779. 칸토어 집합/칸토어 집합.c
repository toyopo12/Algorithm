#include <stdio.h>
#include <string.h>
#include <math.h>

void hi(int N)
{
    if(N==2)
    {
        printf("- -   - -");
        return;
    }
    else if(N==1)
    {
        printf("- -");
        return;
    }
    else if(N==0)
    {
        printf("-");
        return;
    }
    else
    {
        int num=pow(3,N-1);
        hi(N - 1);
        for (int i = 0; i < num; i++)
        {
            printf(" ");
        }
        hi(N - 1);
    }
}

int main()
{
    int N;
    while(scanf("%d",&N)!=EOF)
    {
        hi(N);
        printf("\n");
    }
    return 0;
}