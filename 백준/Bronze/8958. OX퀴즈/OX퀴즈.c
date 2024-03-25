#include <stdio.h>
#include <string.h>

int main()
{
    int x;
    int i=0;
    int sum=0;
    char arr[80];
    scanf("%d",&x);
    for(int a=0;a<x;a++)
    {
        scanf("%s",arr);
        for(int b=0;b<strlen(arr);b++)
        {
            if(arr[b]=='O')
            {
                if(b!=strlen(arr)-1 && arr[b+1]=='O')
                {
                    i++;
                    sum += i;
                }
                else if(b!=strlen(arr)-1 && arr[b+1]=='X')
                {
                    i++;
                    sum += i;
                    i=0;
                }
                else if(b==strlen(arr)-1)
                {
                    i++;
                    sum += i;
                    i=0;
                }
            }
        }
        printf("%d\n",sum);
        sum=0;
    }
    return 0;
}