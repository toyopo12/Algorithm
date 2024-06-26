#include <iostream>

using namespace std;

int main()
{
    int arr[1010]={0};
    int n,k;
    int count=0;
    cin >> n >> k;
    for(int i=2;i<=n;i++)
    {
        if(arr[i]==1)
        {
            goto hi;
        }
        for(int j=i;j<=n;j+=i)
        {
            if(arr[j]==0)
            {
                arr[j]=1;
                count++;
                if(count==k)
                {
                    cout << j;
                    return 0;
                }
            }
        }
        hi:;
    }
    return 0;
}