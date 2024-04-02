#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    int arr[10100];
    long long sum=0;
    scanf("%d",&n);
    for(int a=0;a<n;a++)
    {
        scanf("%d",&arr[a]);
    }
    for(int a=0;a<n;a++)
    {
        for(int b=0;b<n;b++)
        {
            if(arr[a]>arr[b])
            {
                sum+=arr[a]-arr[b];
            }
            else if(arr[a]<arr[b])
            {
                sum+=arr[b]-arr[a];
            }
        }
    }
    printf("%lld",sum);
    return 0;
}