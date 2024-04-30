#include <stdio.h>

int main()
{
    int n;
    int c=0;
    scanf("%d",&n);
    int arr[100100];
    for(int a=0;a<n;a++)
    {
        scanf("%d",&arr[a]);
    }
    int sum=arr[0];
    for(int a=1;a<n;a++)
    {
        if(arr[a]==0)
        {
            //최근 수 중 0아닌걸 찾고 빼야함
            for(int b=c;b>=0;b--)
            {
                if(arr[b]!=0)
                {
                    c=b;
                    sum-=arr[b];
                    arr[b]=0;
                    goto hii;
                }
            }
        }
        else
        {
            c=a;
            sum+=arr[a];
        }
        hii:;
    }
    printf("%d",sum);
    return 0;
}