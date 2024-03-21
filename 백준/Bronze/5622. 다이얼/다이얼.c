#include <stdio.h>
#include <string.h>

int main(void)
{
    char arr[15];
    int i=0;
    scanf("%s",arr);
    for(int a=0;a<strlen(arr);a++)
    {
        if (arr[a] == 'S' || arr[a] == 'V' || arr[a] == 'Y' || arr[a] == 'Z')
            i += (arr[a] - 'A') / 3 + 2;
        else
            i += (arr[a] - 'A') / 3 + 3;
    }
    printf("%d",i);
    return 0;
}