#include <iostream>

using namespace std;

int main()
{
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        printf("Case %d: %d\n",i+1,x+y);
    }
    return 0;
}