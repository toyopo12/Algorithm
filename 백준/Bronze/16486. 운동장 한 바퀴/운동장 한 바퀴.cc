#include <iostream>

using namespace std;

int main()
{
    int a,b;
    float sum=0;
    cin >> a >> b;
    cout.precision(10);
    sum+=2*a;
    sum+=2*b*3.141592;
    cout << sum;
    return 0;
}