#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;
    cout << a-max((b-1)/d,(c-1)/e)-1;
    return 0;
}