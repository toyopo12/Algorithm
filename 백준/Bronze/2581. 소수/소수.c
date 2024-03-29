#include <stdio.h>
#include <string.h>

int main()
{
    int x,y;
    int i=0,sum=0,d=0;
    int arr[1000000];
    scanf("%d %d",&x,&y);
    for(int a=x;a<=y;a++)
    {
        if(a==1)
            i--;
        for(int b=2;b<a;b++)
        {
            if(a%b==0)
            {
                i++;
            }
        }
        if(i==0)
        {
            d++;
            arr[d]=a;
            sum+=a;
        }
        i=0;
    }
    if(d==0)
        printf("-1");
    else
        printf("%d\n%d",sum,arr[1]);
    return 0;
}