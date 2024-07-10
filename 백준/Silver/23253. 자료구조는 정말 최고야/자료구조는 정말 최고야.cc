#include <iostream>
#include <stack>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin >> n >> m;
    while(m--)
    {
        stack<int> hi;
        hi.push(200020);
        int x;
        cin >> x;
        while(x--)
        {
            int y;
            cin >> y;
            if(hi.top()<y)
            {
                cout << "No";
                return 0;
            }
            hi.push(y);
        }
    }
    cout << "Yes";
    return 0;
}