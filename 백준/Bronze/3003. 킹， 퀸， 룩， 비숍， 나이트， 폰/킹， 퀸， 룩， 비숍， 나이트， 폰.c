#include <stdio.h>
#include <string.h>

int main(void)
{
    int x;
    int arr[6];
    for(int a=0;a<6;a++)
        scanf("%d",&arr[a]);
    printf("%d %d %d %d %d %d",1-arr[0],1-arr[1],2-arr[2],2-arr[3],2-arr[4],8-arr[5]);
    return 0;

}