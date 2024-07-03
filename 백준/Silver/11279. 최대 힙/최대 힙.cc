#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    priority_queue<int, vector<int> > q;
    int n;
    cin >> n;
    while(n--)
    {
        int x;
        cin >> x;
        if(x==0)
        {
            if(q.size()==0)
            {
                cout << "0\n";
            }
            else
            {
                cout << q.top() << '\n';
                q.pop();
            }
        }
        else
        {
            q.push(x);
        }
    }
    return 0;
}