#include <iostream>

using namespace std;

int main()
{
    long long n;
    long long sum=0;
    int count=0;
    cin >> n;
    while(sum<=n)
    {
        count++;
        sum+=count;
    }
    cout << count-1;
    return 0;
}