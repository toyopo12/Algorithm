#include <stdio.h>
#include <string.h>

int main()
{
    char arr[6];
    go:while(1)
    {
        scanf("%s",arr);
        if(arr[0]=='0')
            return 0;
        for(int a=0;a<=strlen(arr)/2;a++)
        {
            if(arr[a]!=arr[strlen(arr)-a-1])
            {
                printf("no\n");
                goto go;
            }
        }
        printf("yes\n");
        goto go;
    }
}