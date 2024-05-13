#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    int n;
    int max=0;
    int arr[500500]={0};
    int number[8080]={0};
    long long sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //산술평균
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    printf("%d\n",(int)floor((long double)sum/n+0.5));
    //중앙값
    sort(arr,arr+n);
    printf("%d\n",arr[n/2]);
    //최빈값
    int maxnum=arr[n-1];
    int secondnum=arr[n-1];
    int count=0;
    for(int i=0;i<n;i++)
    {
        number[arr[i]+4000]++;
    }
    for(int i=0;i<8001;i++)
    {
        if(number[i]>max)
        {
            max=number[i];
            maxnum=i;
            secondnum=i;
            count=0;
        }
        else if(number[i]==max)
        {
            count++;
            if(maxnum>i)
            {
                secondnum=maxnum;
                maxnum=i;
            }
            else if(maxnum<i&&i<secondnum)
            {
                secondnum=i;
            }
            else if(count==1&&i>secondnum)
            {
                secondnum=i;
            }
        }
    }
    printf("%d\n",secondnum-4000);
    //범위
    printf("%d",arr[n-1]-arr[0]);
    return 0;
}