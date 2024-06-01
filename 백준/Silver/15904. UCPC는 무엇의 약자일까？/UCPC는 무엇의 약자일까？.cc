#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    getline(cin,s);
    char ucpc='a';
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='U' && ucpc=='a')
        {
            ucpc='U';
        }
        else if(s[i]=='C' && ucpc=='U')
        {
            ucpc='C';
        }
        else if(s[i]=='P' && ucpc=='C')
        {
            ucpc='P';
        }
        else if(s[i]=='C' && ucpc=='P')
        {
            cout << "I love UCPC";
            return 0;
        }
    }
    cout << "I hate UCPC";
    return 0;
}