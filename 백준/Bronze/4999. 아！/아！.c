#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char arr[1010];
    char brr[1010];
    scanf("%s",arr);
    scanf("%s",brr);
    if(strlen(arr)>=strlen(brr))
    {
        printf("go");
    }
    else
    {
        printf("no");
    }
    return 0;
}