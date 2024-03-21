#include <stdio.h>
#include <string.h>

int main(void)
{
    int x;
    char arr[1000];
    scanf("%d",&x);
    for(int a=0;a<x;a++)
    {
        scanf("%s",arr);
        printf("%c%c\n",arr[0],arr[strlen(arr)-1]);
    }
    return 0;
}