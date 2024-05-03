#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(b==0)
    {
        if(12<=a && a<=16)
        {
            printf("320");
        }
        else
        {
            printf("280");
        }
    }
    else
    {
        printf("280");
    }
    return 0;
}