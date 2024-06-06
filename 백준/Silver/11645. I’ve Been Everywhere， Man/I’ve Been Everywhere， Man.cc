#include <iostream>
#include <set>

using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int i=0;i<T;i++)
    {
        set<string> s;
        int n;
        cin >> n;
        for(int j=0;j<n;j++)
        {
            string ss;
            cin >> ss;
            s.insert(ss);
        }
        cout << s.size() << "\n";
    }
    return 0;
}