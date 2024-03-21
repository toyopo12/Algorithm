#include <stdio.h>
#include <string.h>

int main(void)
{
    char arr[7];
    scanf("%[^\n]s",arr);
    if(arr[2]>arr[6])
        printf("%d%d%d",arr[2]-48,arr[1]-48,arr[0]-48);
    else if(arr[2]<arr[6])
        printf("%d%d%d",arr[6]-48,arr[5]-48,arr[4]-48);
    else
        if(arr[1]>arr[5])
            printf("%d%d%d",arr[2]-48,arr[1]-48,arr[0]-48);
        else if(arr[1]<arr[5])
            printf("%d%d%d",arr[6]-48,arr[5]-48,arr[4]-48);
        else
            if(arr[0]>arr[4])
                printf("%d%d%d",arr[2]-48,arr[1]-48,arr[0]-48);
            else if(arr[0]<arr[4])
                printf("%d%d%d",arr[6]-48,arr[5]-48,arr[4]-48);
            else
                printf("%d%d%d",arr[2]-48,arr[1]-48,arr[0]-48);
}