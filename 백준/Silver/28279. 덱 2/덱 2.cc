#include <iostream>
#include <deque>

using namespace std;

deque<int> hi;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin >> N;
    for(int i=0;i<N;i++)
    {
        int x;
        cin >> x;
        if(x==1)
        {
            int y;
            cin >> y;
            hi.push_front(y);
        }
        else if(x==2)
        {
            int y;
            cin >> y;
            hi.push_back(y);
        }
        else if(x==3)
        {
            if(hi.empty())
            {
                cout << "-1\n";
            }
            else
            {
                cout << hi.front() << '\n';
                hi.pop_front();
            }
        }
        else if(x==4)
        {
            if(hi.empty())
            {
                cout << "-1\n";
            }
            else
            {
                cout << hi.back() << '\n';
                hi.pop_back();
            }
        }
        else if(x==5)
        {
            cout << hi.size() << '\n';
        }
        else if(x==6)
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
        else if(x==7)
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
        else if(x==8)
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