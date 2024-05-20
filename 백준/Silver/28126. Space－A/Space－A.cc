#include <iostream>

using namespace std;

int main()
{
    int N;
    scanf("%d",&N);
    int R=0;
    int U=0;
    int X=0;
    int K;
    int sum=0;
    char hi[100100];
    scanf("%s",hi);
    for(int i=0;i<N;i++)
    {
        if(hi[i]=='R')
        {
            R++;
        }
        else if(hi[i]=='U')
        {
            U++;
        }
        else if(hi[i]=='X')
        {
            X++;
        }
    }
    scanf("%d",&K);
    for(int i=0;i<K;i++)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        x-=1;
        y-=1;
        if(x<y)
        {
            if(x>X)
            {
                if(R>=x-X && U>=y-X)
                {
                    sum++;
                }
            }
            else if(x<=X)
            {
                if(U>=y-x)
                {
                    sum++;
                }
            }
        }
        else if(x>=y)
        {
            if(y>X)
            {
                if(R>=x-X && U>=y-X)
                {
                    sum++;
                }
            }
            else if(y<=X)
            {
                if(R>=x-y)
                {
                    sum++;
                }
            }
        }
    }
    printf("%d",sum);
    return 0;
}