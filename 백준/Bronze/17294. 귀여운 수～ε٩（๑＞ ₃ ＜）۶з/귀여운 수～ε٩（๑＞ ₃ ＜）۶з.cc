#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a;
    string x;
    cin >> x;
    a=x[1]-x[0];
    for(int i=2;i<x.length();i++)
    {
        if(x[i]-x[i-1]!=a)
        {
            cout << "흥칫뿡!! <(￣ ﹌ ￣)>";
            return 0;
        }
    }
    cout << "◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!";
    return 0;
}