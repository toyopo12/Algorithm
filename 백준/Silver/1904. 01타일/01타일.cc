#include <iostream>

using namespace std;

long long num[1000100];
long long fib(int n)
{
    if(num[n])
    {
        return num[n];
    }
    else if(n==1)
    {
        return 1;
    }
    else if(n==2)
    {
        return 2;
    }
    else
    {
        return num[n]=(fib(n-1)+fib(n-2))%15746;
    }
}
int main()
{
    int n;
    cin >> n;
    cout << fib(n);
    return 0;
}