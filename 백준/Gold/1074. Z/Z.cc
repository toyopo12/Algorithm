#include <iostream>

using namespace std;

int arr[17];
int brr[17];
long long sum;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,r,c;
    cin >> n >> r >> c;
    int count=15;
    int good=32768;
    while(r!=0)
    {
        if(r>=good)
        {
            r-=good;
            arr[count]=1;
        }
        good/=2;
        count--;
    }
    count=15;
    good=32768;
    while(c!=0)
    {
        if(c>=good)
        {
            c-=good;
            brr[count]=1;
        }
        good/=2;
        count--;
    }
    long long hi=1;
    for(int i=0;i<=15;i++)
    {
        if(arr[i]==1)
        {
            sum+=hi*2;
        }
        if(brr[i]==1)
        {
            sum+=hi;
        }
        hi*=4;
    }
    cout << sum;
    return 0;
}