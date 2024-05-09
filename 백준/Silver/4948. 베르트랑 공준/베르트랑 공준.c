#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int arr[250000]={0};
    for(int i=2;i<=sqrt(250000);i++)
    {
        if(arr[i]==0)
        {
            for(int j=2;j<250000/i;j++)
            {
                arr[i*j]=1;
            }
        }
    }
    while(1)
    {
        int n;
        int max=0;
        scanf("%d",&n);
        if(n==0)
        {
            return 0;
        }
        for(int a=n+1;a<=2*n;a++)
        {
            if(arr[a]==0)
            {
                max++;
            }
        }
        printf("%d\n",max);
    }
}