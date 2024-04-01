#include <stdio.h>
#include <string.h>

int main()
{
    int d,x,y;
    scanf("%d",&d);
    scanf("%d %d",&x,&y);
    int maxx=x,maxy=y,minx=x,miny=y;
    for(int a=0;a<d-1;a++)
    {
        int A,B;
        scanf("%d %d",&A,&B);
        if(maxx<A)
        {
            maxx = A;
            if (maxy < B)
                maxy = B;
            else if(miny>B)
                miny=B;
        }
        else if(minx>A)
        {
            minx = A;
            if (maxy < B)
                maxy = B;
            else if(miny>B)
                miny=B;
        }
        else {
            if (maxy < B)
                maxy = B;
            else if (miny > B)
                miny = B;
        }
    }
    printf("%d",(maxx-minx)*(maxy-miny));
    return 0;
}