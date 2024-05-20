#include <iostream>

using namespace std;

int main()
{
    int Q;
    scanf("%d",&Q);
    for(int i=0;i<Q;i++)
    {
        int floor=0;
        int sum=0;
        int a,d,x;
        scanf("%d %d %d",&a,&d,&x);
        while(sum<x)
        {
            sum+=a;
            sum+=d*floor;
            floor++;
        }
        printf("%d %d\n",floor,a+d*floor-sum+x-d);
    }
    return 0;
}