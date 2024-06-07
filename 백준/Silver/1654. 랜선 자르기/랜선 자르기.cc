#include <iostream>
#include <algorithm>
#include <limits.h>

using namespace std;

int main()
{
    int ans=0;
    long long min=0;
    long long max=1;
    int K,N;
    int arr[10010];
    cin >> K >> N;
    for(int i=0;i<K;i++)
    {
        cin >> arr[i]; 
    }
    for(int i=0;i<31;i++)
    {
        max*=2;
    }
    for(int i=0;i<31;i++)
    {
        long long mid=(min+max)/2;
        int check=0;
        for(int j=0;j<K;j++)
        {
            check+=arr[j]/mid;
        }
        if(check<N)
        {
            max=mid;
        }
        else
        {
            if(ans<mid)
            {
                ans=mid;
            }
            min=mid;
        }
    }
    cout << ans;
    return 0;
}