#include <stdio.h>

int main()
{
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        int x1,y1,r1,x2,y2,r2;
        long long hi;
        scanf("%d%d%d%d%d%d",&x1,&y1,&r1,&x2,&y2,&r2);
        hi=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
        if(x1==x2 && y1==y2 && r1==r2)
        {
            printf("-1\n");
        }
        else if(r1<r2)
        {
            if(hi>(r1+r2)*(r1+r2))
            {
                printf("0\n");
            }
            else if(hi==(r1+r2)*(r1+r2)) 
            {
                printf("1\n");
            }
            else if(hi==(r2-r1)*(r2-r1))
            {
                printf("1\n");
            }
            else if(hi<(r1+r2)*(r1+r2) && hi>(r2-r1)*(r2-r1))
            {
                printf("2\n");
            }
            else if(hi<(r2-r1)*(r2-r1))
            {
                printf("0\n");
            }
        }
        else if(r1>=r2)
        {
            if(hi>(r1+r2)*(r1+r2))
            {
                printf("0\n");
            }
            else if(hi==(r1+r2)*(r1+r2)) 
            {
                printf("1\n");
            }
            else if(hi==(r1-r2)*(r1-r2))
            {
                printf("1\n");
            }
            else if(hi<(r1+r2)*(r1+r2) && hi>(r1-r2)*(r1-r2))
            {
                printf("2\n");
            }
            else if(hi<(r1-r2)*(r1-r2))
            {
                printf("0\n");
            }
        }
    }
    return 0;
}