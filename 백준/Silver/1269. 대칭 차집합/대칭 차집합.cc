#include <iostream>
#include <set>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    set<int> s;
    int a,b;
    cin >> a >> b;
    for(int i=0;i<a+b;i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    cout << 2*s.size()-a-b;
    return 0;
}