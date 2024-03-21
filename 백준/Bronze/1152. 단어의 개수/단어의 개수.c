#include <stdio.h>
#include <string.h>

int main(void)
{
    int i=0;
    char arr[1000000];
    scanf("%[^\n]s",arr);
    for(int a=0;a<strlen(arr);a++)
    {
        if(arr[a]!=32 && arr[a+1]==32)
            i++;
        else if(a==strlen(arr)-1)
            if(arr[strlen(arr)-1]!=32)
                i++;
    }
    printf("%d",i);
    return 0;
}