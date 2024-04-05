#include <stdio.h>
#include <string.h>

int main()
{
    char arr[101]={0,};
    int sum=0;
    scanf("%s",arr);
    for(int b=0;b<26;b++)
    {
        for(int c=0;c<strlen(arr);c++)
        {
            if(b+97==arr[c])
            {
                sum++;
            }
        }
        printf("%d ",sum);
        sum=0;
    }
    return 0;
}