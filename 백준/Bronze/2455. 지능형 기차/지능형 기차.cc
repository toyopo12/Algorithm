#include <iostream>

using namespace std;

int main()
{
    int max=0;
    int now=0;
    for(int i=0;i<4;i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        now-=a;
        now+=b;
        if(now>max)
        {
            max=now;
        }
    }
    printf("%d",max);
    return 0;
}