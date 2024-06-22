#include <iostream>

using namespace std;

int main()
{
    long long n;
    long long now=1;
    cin >> n;
    while(1)
    {
        if(now*now>n)
        {
            cout << "The largest square has side length " << now-1 << ".";
            break;
        }
        now++;
    }
    return 0;
}