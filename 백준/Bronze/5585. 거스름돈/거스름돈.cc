#include <iostream>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    int sum=0;
    cin >> n;
    n=1000-n;
    sum+=n/500;
    n%=500;
    sum+=n/100;
    n%=100;
    sum+=n/50;
    n%=50;
    sum+=n/10;
    n%=10;
    sum+=n/5;
    n%=5;
    cout << sum+n;
    return 0;
}