#include <iostream>
#include <list>
#include <string>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string good;
    list<char> hi;
    int n;
    cin >> good >> n;
    for(int i=0;i<good.length();i++)
    {
        hi.push_back(good[i]);
    }
    list<char>::iterator iter=hi.end();
    while(n--)
    {
        char x;
        cin >> x;
        if(x=='L')
        {
            if(iter!=hi.begin())
            {
                iter--;
            }
        }
        else if(x=='D')
        {
            if(iter!=hi.end())
            {
                iter++;
            }
        }
        else if(x=='B')
        {
            if(iter!=hi.begin())
            {
                iter--;
                iter=hi.erase(iter); // 어려워요
            }
        }
        else if(x=='P')
        {
            char y;
            cin >> y;
            hi.insert(iter,y);
        }
    }
    for(auto x:hi)
    {
        cout << x;
    }
    return 0;
}