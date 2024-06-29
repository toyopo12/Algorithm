#include <iostream>

using namespace std;

int main()
{
    int n;
    int sum=0;
    int a[1000];
    int b[1000];
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin >> b[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]<=b[i])
        {
            sum++;
        }
    }
    cout << sum;
    return 0;
}