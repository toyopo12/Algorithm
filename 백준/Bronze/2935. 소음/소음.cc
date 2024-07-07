#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string a,b;
    char x;
    cin >> a >> x >> b;
    if(x=='*')
    {
        cout << "1";
        for(int i=0;i<a.length()+b.length()-2;i++)
        {
            cout << "0";
        }
    }
    else
    {
        if(a.length()<b.length())
        {
            cout << "1";
            for(int i=0;i<b.length()-a.length()-1;i++)
            {
                cout << "0";
            }
            cout << "1";
            for(int i=0;i<a.length()-1;i++)
            {
                cout << "0";
            }
        }
        else if(a.length()>b.length())
        {
            cout << "1";
            for(int i=0;i<a.length()-b.length()-1;i++)
            {
                cout << "0";
            }
            cout << "1";
            for(int i=0;i<b.length()-1;i++)
            {
                cout << "0";
            }
        }
        else
        {
            cout << "2";
            for(int i=0;i<a.length()-1;i++)
            {
                cout << "0";
            }
        }
    }
    return 0;
}