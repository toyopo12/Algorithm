#include <iostream>

using namespace std;

int main()
{
    int m,seed,x1,x2;
    scanf("%d %d %d %d",&m,&seed,&x1,&x2);
    for(int a=0;a<m;a++)
    {
        for(int c=0;c<m;c++)
        {
            if((a*seed+c)%m==x1 && (a*x1+c)%m==x2)
            {
                printf("%d %d",a,c);
                return 0;
            }
        }
    }
}