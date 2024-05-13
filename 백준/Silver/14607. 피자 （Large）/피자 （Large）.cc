#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int main()
{
    int n;
    long long sum=0;
    scanf("%d",&n);
    if(n%2==0)
    {
        sum=n;
        sum/=2;
        sum*=n-1;
    }
    else
    {
        sum=n-1;
        sum/=2;
        sum*=n;
    }
    printf("%lld",sum);
    return 0;
}