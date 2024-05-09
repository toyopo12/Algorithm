#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    unsigned int a[63247]={0};
    int n;
    scanf("%d",&n);
    for(int N=2;N<63247;N++)
    {
        a[N]=N*N;
    }
    for(int N=0;N<n;N++)
    {
        unsigned int point;
        scanf("%u",&point);
        if(point==0 || point==1)
        {
            printf("2\n");
            goto hi;
        }
        for(int K=2;K<63247;K++)
        {
            if(point<a[K])
            {
                for(unsigned int J=point;J<a[K];J++)
                {
                    for(unsigned int P=2;P<=sqrt(J);P++)
                    {
                        if(J%P==0)
                        {
                            goto hii;
                        }
                    }
                    printf("%u\n",J);
                    goto hi;
                    hii:;
                }
            }
        }
        hi:;
    }
    return 0;
}