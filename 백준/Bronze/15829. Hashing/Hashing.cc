#include <iostream>

using namespace std;

int main()
{
    int n;
    long long sum=0;
    scanf("%d",&n);
    char a[51];
    scanf("%s",a);
    for(int j=0;j<n;j++)
    {
        int now=a[j]-96;
        for(int p=0;p<j;p++)
        {
            now*=31;
            now%=1234567891;
        }
        sum+=now;
    }
    printf("%lld",sum);
    return 0;
}