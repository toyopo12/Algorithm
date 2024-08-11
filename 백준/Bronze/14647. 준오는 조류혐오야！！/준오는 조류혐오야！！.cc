#include <iostream>

using namespace std;

int arr[501];
int brr[501];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    int good=0;
    int sum=0;
    cin >> n >> m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int x;
            int count=0;
            cin >> x;
            while(x!=0)
            {
                if(x%10==9)
                {
                    count++;
                    sum++;
                }
                x/=10;
            }
            arr[i]+=count;
            brr[j]+=count;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(good<arr[i])
        {
            good=arr[i];
        }
    }
    for(int i=0;i<m;i++)
    {
        if(good<brr[i])
        {
            good=brr[i];
        }
    }
    cout << sum-good;
    return 0;
}