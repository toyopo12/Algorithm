#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    for(int i=0;i<5;i++)
    {
        int x;
        cin >> x;
        cout << x-n*m << " ";
    }
    return 0;
}