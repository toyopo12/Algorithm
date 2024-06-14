#include <iostream>
#include <stack>
#include <vector>

using namespace std;

stack<pair<int,int>> hi;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long sum=0;
    int n;
    cin >> n;
    hi.push({1000000001,0});
    for(int i=1;i<=n;i++)
    {
        int x;
        cin >> x;
        while(hi.top().first<=x)
        {
            sum+=i-hi.top().second-1;
            hi.pop();
        }
        hi.push({x,i});
    }
    int size=hi.size()-1;
    for(int i=0;i<size;i++)
    {
        sum+=n-hi.top().second;
        hi.pop();
    }
    cout << sum;
    return 0;
}