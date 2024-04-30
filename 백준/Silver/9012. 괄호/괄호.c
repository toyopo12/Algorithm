#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int a=0;a<n;a++)
    {
        char arr[55];
        scanf("%s",arr);
        int sum=0;
        for(int i=0;i<strlen(arr);i++)
        {
            if(arr[i]=='(')
            {
                sum++;
            }
            else if(arr[i]==')')
            {
                sum--;
                if(sum<0)
                {
                    printf("NO\n");
                    goto hi;
                }
            }
        }
        if(sum==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        hi:;
    }
    return 0;
}