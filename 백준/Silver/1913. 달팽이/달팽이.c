#include <stdio.h>
#include <string.h>

int main()
{
    int dal[1000][1000];
    int n,search;
    scanf("%d %d",&n,&search);
    int fx=(n-1)/2;
    int fy=(n-1)/2;
    dal[fx][fy]=1;
    for(int a=1;2*a+1<=n;a++)
    {
        dal[fx-a][fy-a]=(2*a+1)*(2*a+1);
        for(int b=1-a;b<=a;b++)
        {
            dal[fx+b][fy-a]=(2*a+1)*(2*a+1)-a-b;
        }
        for(int c=1-a;c<=a;c++)
        {
            dal[fx-a][fy+c]=(2*a-1)*(2*a-1)+a+c;
        }
        for(int d=-a;d<=a;d++)
        {
            dal[fx+a][fy+d]=dal[fx+a][fy-a]-a-d;
        }
        for(int e=-a;e<=a;e++)
        {
            dal[fx+e][fy+a]=dal[fx-a][fy+a]+a+e;
        }
    }
    for(int a=0;a<n;a++)
    {
        for(int b=0;b<n;b++)
        {
            printf("%d ",dal[a][b]);
        }
        printf("\n");
    }
    for(int a=0;a<n;a++)
    {
        for(int b=0;b<n;b++)
        {
            if(search==dal[a][b])
            {
                printf("%d %d",a+1,b+1);
                break;
            }
        }
    }
    return 0;
}