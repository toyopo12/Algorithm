#include <iostream>
#include <queue>
#include <vector>

using namespace std;

queue<pair<int,int>> q;

int main()
{
    int a,b;
    cin >> a >> b;
    q.push({b,1});
    while(!q.empty())
    {
        if(q.front().first%2==0)
        {
            if(q.front().first/2>a)
            {
                q.push({q.front().first/2,q.front().second+1});
            }
            else if(q.front().first/2==a)
            {
                cout << q.front().second+1;
                return 0;
            }
        }
        else if((q.front().first-1)%10==0)
        {
            if((q.front().first-1)/10>a)
            {
                q.push({(q.front().first-1)/10,q.front().second+1});
            }
            else if((q.front().first-1)/10==a)
            {
                cout << q.front().second+1;
                return 0;
            }
        }
        q.pop();
    }
    cout << "-1";
    return 0;
}