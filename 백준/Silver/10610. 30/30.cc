#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool cmp(int a,int b)
{
    return a > b;
}

int main()
{
    string s;
    int sum=0;
    bool cut = false;
    cin >> s;
    sort(s.begin(),s.end(),greater<char>());
    for(int i=0;i<s.length();i++)
    {
        sum+=s[i]-'0';
    }
    if(sum%3==0 && s[s.length()-1]=='0')
    {
        cut = true;
    }
    else
    {
        cut = false;
    }
    if(cut)
    {
        for(int i=0;i<s.length();i++)
        {
            cout << s[i];
        }
    }
    else
    {
        cout << "-1";
    }
    return 0;
}