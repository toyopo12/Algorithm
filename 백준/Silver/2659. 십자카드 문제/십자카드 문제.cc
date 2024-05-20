#include <iostream>

using namespace std;

int main()
{
    int A,B,C,D;
    int num[10010]={0};
    int clock=0;
    int count=0;
    for(int a=1;a<10;a++)
    {
        for(int b=a;b<10;b++)
        {
            for(int d=b;d<10;d++)
            {
                num[1000*a+100*b+10*a+d]=1;
            }
            for(int c=a+1;c<10;c++)
            {
                for(int d=a+1;d<10;d++)
                {
                    num[1000*a+100*b+10*c+d]=1;
                }
            }
        }
        num[1111*a]=1;
    }
    scanf("%d %d %d %d",&A,&B,&C,&D);
    if(num[1000*A+100*B+10*C+D]==1)
    {
        clock=1000*A+100*B+10*C+D;
    }
    else if(num[1000*B+100*C+10*D+A]==1)
    {
        clock=1000*B+100*C+10*D+A;
    }
    else if(num[1000*C+100*D+10*A+B]==1)
    {
        clock=1000*C+100*D+10*A+B;
    }
    else if(num[1000*D+100*A+10*B+C]==1)
    {
        clock=1000*D+100*A+10*B+C;
    }
    for(int i=1111;i<=clock;i++)
    {
        if(num[i]==1)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}