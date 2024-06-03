#include <iostream>
#include <map>

using namespace std;

map<int,int> m;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N,M;
    cin >> N;
    for(int i=0;i<N;i++)
    {
        int x;
        cin >> x;
        m[x]++;
    }
    cin >> M;
    for(int i=0;i<M;i++)
    {
        int x;
        cin >> x;
        cout << m[x] << " ";
    }
}