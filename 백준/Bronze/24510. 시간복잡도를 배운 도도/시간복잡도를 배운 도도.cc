#include <iostream>
#include <string>

using namespace std;

int main()
{
    int C;
    int max=0;
    cin >> C;
    for(int i=0;i<C;i++)
    {
        string s;
        int sum=0;
        cin >> s;
        for(int j=0;j<s.size();j++)
        {
            if(s[j]=='f' && s[j+1]=='o' && s[j+2]=='r')
            {
                sum++;
                j+=2;
            }
            else if(s[j]=='w' && s[j+1]=='h' && s[j+2]=='i' && s[j+3]=='l' && s[j+4]=='e')
            {
                sum++;
                j+=4;
            }
        }
        if(max<sum)
        {
            max=sum;
        }
    }
    cout << max;
    return 0;
}