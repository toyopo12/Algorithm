#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int a=0;a<n;a++)
    {
        char a[22];
        scanf("%s",a);
        if(6<=strlen(a)&&strlen(a)<=9)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }
    return 0;
}