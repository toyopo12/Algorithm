#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    int arr[1000001]={0,};
    for(int a=2;a<=1000000;a++)
    {
        if(arr[a]==0)
        {
            for(int b=2;a*b<=1000000;b++)
            {
                arr[a*b]=1;
            }
        }
    }
    go:while(1)
    {
        scanf("%d",&n);
        if(n==0)
        {
            return 0;
        }
        for(int c=0;3+2*c<=n/2;c++)
        {
            if(arr[3+2*c]==0 && arr[n-3-2*c]==0)
            {
                printf("%d = %d + %d\n",n,3+2*c,n-3-2*c);
                goto go;
            }
        }
    }
}