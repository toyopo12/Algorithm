#include <iostream>
#include <map>
#include <set>
#include <string>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        map<string,int> hi;
        set<string> s;
        long long sum=1;
        int n;
        cin >> n;
        for(int j=0;j<n;j++)
        {
            string x,y;
            cin >> x >> y;
            hi[y]++;
            s.insert(y);
        }
        for(set<string>::iterator iter=s.begin();iter!=s.end();iter++)
        {
            sum*=hi[*iter]+1;
        }
        cout << sum-1 << '\n';
    }
    return 0;
}