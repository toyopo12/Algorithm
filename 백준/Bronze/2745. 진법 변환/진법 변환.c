#include <stdio.h>
#include <string.h>

int main()
{
    char arr[100];
    int x;
    int sum=0;
    int i=0;
    scanf("%s %d",arr,&x);
    for(int a=0;a<strlen(arr);a++)
    {
        if(arr[a]>64)
            i+=arr[a]-55;
        else
            i+=arr[a]-48;
        for(int b=1;b<strlen(arr)-a;b++)
        {
            i*=x;
        }
        sum+=i;
        i=0;
    }
    printf("%d",sum);

    return 0;
}