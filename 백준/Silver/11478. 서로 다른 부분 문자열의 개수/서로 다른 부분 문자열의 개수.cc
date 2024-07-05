#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    set<string> s;
    string hi="";
    string x;
    cin >> x;
    int good=x.length();
    for(int i=0;i<good;i++)
    {
        for(int j=i;j<good;j++)
        {
            hi+=x[j];
            s.insert(hi);
        }
        hi="";
    }
    cout << s.size();
    return 0;
}