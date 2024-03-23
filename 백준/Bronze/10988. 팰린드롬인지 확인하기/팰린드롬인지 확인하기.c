#include <stdio.h>
#include <string.h>

int main(void)
{
    char arr[101];
    scanf("%s", arr);
    for (int a = 0; a < (strlen(arr)+1)/2; a++)
        if(arr[a]!=arr[strlen(arr)-a-1])
        {
            printf("0");
            return 0;
        }
    printf("1");
}