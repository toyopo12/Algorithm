#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int main()
{
    int n;
    long long sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum+=i-1;
    }
    printf("%lld",sum);
    return 0;
}