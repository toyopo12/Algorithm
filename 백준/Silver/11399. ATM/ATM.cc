#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    int arr[1010]={0};
    long long sum=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+N);
    for(int i=0;i<N;i++)
    {
        sum+=arr[i]*(N-i);
    }
    printf("%lld",sum);
    return 0;
}