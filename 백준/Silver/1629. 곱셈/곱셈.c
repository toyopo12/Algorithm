#include <stdio.h>
#include <string.h>

int main()
{
    int a,b,c;
    long long arr[32]={0,};
    int brr[32]={0,};
    int p=0;
    long long sum=1;
    scanf("%d %d %d",&a,&b,&c);
    arr[0]=a%c;
    arr[1]=(arr[0]*arr[0])%c;
    for(int A=2;A<32;A++)
    {
        arr[A]=(arr[A-1]*arr[A-1])%c;
    }
    while(1)
    {
        brr[p]=b%2;
        b/=2;
        p++;
        if(b==0)
            break;
    }
    for(int A=31;A>=0;A--)
    {
        if(brr[A]==1)
        {
            sum=(sum*arr[A])%c;
        }
    }
    printf("%lld",sum);
    return 0;
}