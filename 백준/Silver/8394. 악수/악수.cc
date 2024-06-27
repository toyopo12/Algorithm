#include <iostream>
#include <string>

using namespace std;

int main()
{
    string x="123583145943707741561785381909987527965167303369549325729101";
    int n;
    cin >> n;
    cout << x[n%60-1];
    return 0;
}