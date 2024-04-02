#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    int arr[101]={0,};
    int i=0;
    scanf("%d",&n);
    for(int a=0;a<n;a++)
    {
        int b;
        scanf("%d",&b);
        if(arr[b]==1)
        {
            i++;
        }
        else if(arr[b]==0)
            arr[b]=1;
    }
    printf("%d",i);
    return 0;
}