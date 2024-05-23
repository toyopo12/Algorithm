#include <iostream>

using namespace std;

int main()
{
    int N;
    int twomin=100;
    int thrmin=150;
    long long sum=0;
    scanf("%d",&N);
    int arr[7]={0};
    for(int i=0;i<6;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            if(i!=j && i+j!=5)
            {
                if(twomin>arr[i]+arr[j])
                {
                    twomin=arr[i]+arr[j];
                }
            }
        }
    }
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            for(int k=0;k<6;k++)
            {
                if(i!=j && i!=k && j!=k && i+j!=5 && j+k!=5 && i+k!=5)
                {
                    if(thrmin>arr[i]+arr[j]+arr[k])
                    {
                        thrmin=arr[i]+arr[j]+arr[k];
                    }
                }
            }
        }
    }
    sort(arr,arr+6);
    if(N==1)
    {
        for(int i=0;i<5;i++)
        {
            sum+=arr[i];
        }
    }
    else
    {
        long long bigsave=arr[0];
        bigsave*=(N-2);
        bigsave*=5*N-6;
        sum+=bigsave;
        sum+=4*thrmin;
        sum+=4*(2*N-3)*twomin;
    }
    printf("%lld",sum);
    return 0;
}