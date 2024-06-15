#include <iostream>

using namespace std;

long long gcd(long long a, long long b)
{
	long long c;
	while (b!=0)
	{
		c=a%b;
		a=b;
		b=c;
	}
	return a;
}

int main()
{
    int n;
    long long sum=0;
    long long max=1;
    long long arr[10];
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        if(max<arr[i])
        {
            max*=arr[i]/gcd(arr[i],max);
        }
        else
        {
            max*=arr[i]/gcd(max,arr[i]);
        }
    }
    for(int i=0;i<n;i++)
    {
        sum+=max/arr[i];
    }
    cout << max/gcd(sum,max) << "/" << sum/gcd(sum,max);
    return 0;
}