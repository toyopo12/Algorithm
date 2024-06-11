#include <iostream>
#include <string>
#include <queue>

using namespace std;

queue<int> hi;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin >> N;
    for(int i=0;i<N;i++)
    {
        string x;
        cin >> x;
        if(x=="push")
        {
            int y;
            cin >> y;
            hi.push(y);
        }
        else if(x=="pop")
        {
            if(hi.empty())
            {
                cout << "-1\n";
            }
            else
            {
                cout << hi.front() << '\n';
                hi.pop();
            }
        }
        else if(x=="size")
        {
            cout << hi.size() << '\n';
        }
        else if(x=="empty")
        {
            if(hi.empty())
            {
                cout << "1\n";
            }
            else
            {
                cout << "0\n";
            }
        }
        else if(x=="front")
        {
            if(hi.empty())
            {
                cout << "-1\n";
            }
            else
            {
                cout << hi.front() << '\n';
            }
        }
        else if(x=="back")
        {
            if(hi.empty())
            {
                cout << "-1\n";
            }
            else
            {
                cout << hi.back() << '\n';
            }
        }
    }
    return 0;
}