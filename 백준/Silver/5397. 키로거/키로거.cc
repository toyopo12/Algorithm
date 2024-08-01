#include <iostream>
#include <list>
#include <string>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    list<char> hi;
    list<char>::iterator iter;
    cin >> n;
    while(n--)
    {
        hi.clear();
        iter=hi.begin();
        string good;
        cin >> good;
        for(int i=0;i<good.length();i++)
        {
            if(good[i]=='<')
            {
                if(iter!=hi.begin())
                {
                    iter--;
                }
            }
            else if(good[i]=='>')
            {
                if(iter!=hi.end())
                {
                    iter++;
                }
            }
            else if(good[i]=='-')
            {
                if(iter!=hi.begin())
                {
                    iter--;
                    iter=hi.erase(iter);
                }
            }
            else
            {
                hi.insert(iter,good[i]);
            }
        }
        for(auto x:hi)
        {
            cout << x;
        }
        cout << '\n';
    }
    return 0;
}