#include <iostream>

using namespace std;

int main()
{
    int N,K;
    int maxnum;
    int sum=0;
    int arr[11];
    scanf("%d%d",&N,&K);
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=N-1;i>=0;i--)
    {
        if(arr[i]<=K)
        {
            maxnum=i;
            break;
        }
    }
    for(int i=maxnum;i>=0;i--)
    {
        sum+=K/arr[i];
        K%=arr[i];
    }
    printf("%d",sum);
    return 0;
}