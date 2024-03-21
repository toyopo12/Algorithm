#include <stdio.h>
#include <string.h>

int main(void)
{
    int i;
    char arr[100];
    scanf("%s",arr);
    for(int a=0;a<26;a++)
    {
        for(int b=0;b<strlen(arr);b++)
        {
            if(arr[b]==a+97) {
                i=b;
                break;
            }
            else
                i=-1;
        }
        printf("%d ",i);
    }
    return 0;
}