#include <stdio.h>

int main()
{
    int N,K;
    scanf("%d %d",&N,&K);
    int arr[5050]={0};
    for(int a=1;a<=N;a++)
    {
        arr[a]=1;
    }
    printf("<%d",K);
    int now=K;
    arr[K]=-1;
    for(int a=1;a<N;a++)
    {
        for(int b=0;b<K;b++)
        {
            if(now==N)
            {
                now=1;
                hiii:;
                if(arr[now]==-1)
                {
                    if(now==N)
                    {
                        now=1;
                    }
                    else
                    {
                        now++;
                    }
                    goto hiii;
                }
            }
            else
            {
                now++;
                hii:;
                if(arr[now]==-1)
                {
                    if(now==N)
                    {
                        now=1;
                    }
                    else
                    {
                        now++;
                    }
                    goto hii;
                }
            }
        }
        printf(", %d",now);
        arr[now]=-1;
    }
    printf(">");
    return 0;
}