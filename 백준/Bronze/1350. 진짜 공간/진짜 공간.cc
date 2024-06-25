#include <iostream>

using namespace std;

int main()
{
    long long arr[55]={0};
    long long sum=0;
    int n;
    long long c;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cin >> c;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            sum+=(arr[i]-1)/c+1;
        }
    }
    cout << c*sum;
    return 0;
}