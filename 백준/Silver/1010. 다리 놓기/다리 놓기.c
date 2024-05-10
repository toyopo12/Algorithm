#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int T;
    scanf("%d",&T);
    for(int a=0;a<T;a++)
    {
        int N,M;
        scanf("%d %d",&N,&M);
        int n=N+1;
        int r=M-N;
        long long score=1;
        for(int b=n+r-1;b>=n;b--)
        {
            score*=b;
            while(score%r==0)
            {
                if(r==1)
                {
                    for(int c=b-1;c>=n;c--)
                    {
                        score*=c;
                    }
                    goto hi;
                }
                score/=r;
                r--;
            }
        }
        hi:;
        printf("%lld\n",score);
    }
    return 0;
}