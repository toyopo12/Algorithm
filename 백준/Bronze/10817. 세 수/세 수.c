#include <stdio.h>

int main()
{
    int arr[4];
    int temp;
    for(int a=0;a<3;a++)
    {
        scanf("%d",&arr[a]);
    }
    for(int a=0;a<3;a++)
    {
        for(int b=0;b<3;b++)
        {
            if(arr[a]<arr[b])
            {
                temp=arr[a];
                arr[a]=arr[b];
                arr[b]=temp;
            }
        }
    }
    printf("%d",arr[1]);
    return 0;
}