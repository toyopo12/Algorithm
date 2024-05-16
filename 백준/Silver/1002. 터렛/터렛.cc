#include <iostream>

int main()
{
    int n;
    scanf("%d",&n);
    for(int a=0;a<n;a++)
    {
        int x1,y1,r1,x2,y2,r2;
        scanf("%d%d%d%d%d%d",&x1,&y1,&r1,&x2,&y2,&r2);
        int xy2=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2); // 두 점 사이 거리
        if(x1==x2 && y1==y2 && r1==r2)
        {
            printf("-1\n");
        }
        else if(r1<=r2)
        {
            int temp;
            temp=r1;
            r1=r2;
            r2=temp;
            if(xy2>(r1+r2)*(r1+r2))
            {
                printf("0\n");
            }
            else if(xy2==(r1+r2)*(r1+r2)) 
            {
                printf("1\n");
            }
            else if(xy2<(r1+r2)*(r1+r2) && xy2==(r1-r2)*(r1-r2))
            {
                printf("1\n");
            }
            else if(xy2<(r1+r2)*(r1+r2) && xy2>(r1-r2)*(r1-r2))
            {
                printf("2\n");
            }
            else if(xy2<(r1-r2)*(r1-r2))
            {
                printf("0\n");
            }
        }
        else if(r1>r2)
        {
            if(xy2>(r1+r2)*(r1+r2))
            {
                printf("0\n");
            }
            else if(xy2==(r1+r2)*(r1+r2)) 
            {
                printf("1\n");
            }
            else if(xy2<(r1+r2)*(r1+r2) && xy2==(r1-r2)*(r1-r2))
            {
                printf("1\n");
            }
            else if(xy2<(r1+r2)*(r1+r2) && xy2>(r1-r2)*(r1-r2))
            {
                printf("2\n");
            }
            else if(xy2<(r1-r2)*(r1-r2))
            {
                printf("0\n");
            }
        }
    }
    return 0;
}