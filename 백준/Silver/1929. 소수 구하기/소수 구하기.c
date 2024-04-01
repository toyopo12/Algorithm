#include <stdio.h>
#include <string.h>

int main()
{
    int M,N;
    int arr[1000001]={0, };
    arr[1]=1;
    scanf("%d %d",&M,&N);
    for(int a=2;a<=N;a++)
    {
        if(arr[a]==0)
        {
            for (int b = 2; a*b <= N; b++)
            {
                arr[a*b] = 1;
            }
        }
    }
    for (int c = M; c <= N; c++)
    {
        if (arr[c] == 0) printf("%d\n", c);
    }
    return 0;
}