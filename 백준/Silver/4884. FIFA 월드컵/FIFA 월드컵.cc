#include <iostream>

using namespace std;

int main()
{
    while(1)
    {
        long long G,T,A,D;
        scanf("%lld %lld %lld %lld",&G,&T,&A,&D);
        if(G==-1 && T==-1 && A==-1 && D==-1)
        {
            break;
        }
        else
        {
            long long X=0;
            long long Y=0;
            long long sum=1;
            while(sum<G*A+D)
            {
                sum*=2;
            }
            Y=sum-G*A-D;
            X=G*T*(T-1)/2+sum-1;
            printf("%lld*%lld/%lld+%lld=%lld+%lld\n",G,A,T,D,X,Y);
        }
    }
    return 0;
}