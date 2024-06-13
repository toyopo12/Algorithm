#include <iostream>
#include <set>
#include <string>

using namespace std;

set<string,greater<>> hi;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    while(n--)
    {
        string a,b;
        cin >> a >> b;
        if(b=="enter")
        {
            hi.insert(a);
        }
        else
        {
            hi.erase(a);
        }
    }
    for(auto i=hi.begin();i!=hi.end();i++)
    {
        cout << *i << '\n';
    }
    return 0;
}