#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int num=6;
    for(int i=11;i<=N;i++)
    {
        num*=i;
    }
    cout << num;
    return 0;
}