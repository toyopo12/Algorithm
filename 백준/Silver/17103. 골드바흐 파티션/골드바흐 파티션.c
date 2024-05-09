#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int n;
    int arr[1000100]={0};
    for(int i=2;i<=sqrt(1000100);i++)
    {
        if(arr[i]==0)
        {
            for(int j=2;j<=1000100/i;j++)
            {
                arr[i*j]=1;
            }
        }
    }
    scanf("%d",&n);
    for(int a=0;a<n;a++)
    {
        int N;
        int count=0;
        scanf("%d",&N);
        for(int b=2;b<=N/2;b++)
        {
            if(arr[b]==0 && arr[N-b]==0)
            {
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}