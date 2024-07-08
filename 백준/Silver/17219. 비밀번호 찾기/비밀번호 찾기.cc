#include <iostream>
#include <map>

using namespace std;

map<string,string> hi;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin >> n >> m;
    while(n--)
    {
        string x,y;
        cin >> x >> y;
        hi.insert({x,y});
    }
    while(m--)
    {
        string x;
        cin >> x;
        cout << hi[x] << '\n';
    }
    return 0;
}