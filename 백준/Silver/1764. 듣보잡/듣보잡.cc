#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

map<string,int> d;
string s[500050];

int main()
{
    int N,M;
    int count=0;
    cin >> N >> M;
    for(int i=0;i<N;i++)
    {
        string x;
        cin >> x;
        d[x]++;
    }
    for(int i=0;i<M;i++)
    {
        string x;
        cin >> x;
        d[x]++;
        if(d[x]==2)
        {
            s[count]=x;
            count++;
        }
    }
    sort(s,s+count);
    cout << count << "\n";
    for(int i=0;i<count;i++)
    {
        cout << s[i] << "\n";
    }
    return 0;
}