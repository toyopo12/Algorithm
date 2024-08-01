#include <iostream>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    int sum=0;
    int now=0;
    cin >> n;
    while(n--)
    {
        int x;
        cin >> x;
        if(x==0)
        {
            now=0;
        }
        else
        {
            now++;
            sum+=now;
        }
    }
    cout << sum;
    return 0;
}