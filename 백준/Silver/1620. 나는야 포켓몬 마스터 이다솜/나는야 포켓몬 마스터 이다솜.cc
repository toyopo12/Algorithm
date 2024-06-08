#include <iostream>
#include <string>
#include <map>

using namespace std;

map<string,int> d;
string hi[100010];

int main()
{
	ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N,M;
    cin >> N >> M;
    for(int i=1;i<=N;i++)
    {
        string x;
        cin >> x;
        d[x]=i;
        hi[i]=x;
    }
    for(int i=0;i<M;i++)
    {
        string x;
        cin >> x;
        if('A'<=x[0] && x[0]<='Z')
        {
            cout << d[x] << '\n';
        }
        else
        {
            cout << hi[stoi(x)] << '\n';
        }
    }
    return 0;
}