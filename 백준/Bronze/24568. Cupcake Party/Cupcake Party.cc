#include <iostream>

using namespace std;

int main()
{
    int a,b;
    int sum;
    scanf("%d %d",&a,&b);
    sum=8*a+3*b;
    if(sum<=28)
    {
        printf("0");
    }
    else
    {
        printf("%d",sum-28);
    }
    return 0;
}