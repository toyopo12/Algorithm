#include <iostream>
#include <stack>

using namespace std;

char pluss[200200];

int main()
{
    stack<int> s;
    int n;
    int p=0;
    int num=1;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        while(1)
        {
            if(s.size()==0)
            {
                if(num>x)
                {
                    cout << "NO";
                    return 0;
                }
                s.push(num);
                num++;
                pluss[p]='+';
                p++;
            }
            if(s.top()<x)
            {
                if(num>x)
                {
                    cout << "NO";
                    return 0;
                }
                else
                {
                    s.push(num);
                    num++;
                    pluss[p]='+';
                    p++;
                }
            }
            else if(s.top()>x)
            {
                s.pop();
                pluss[p]='-';
                p++;
            }
            else
            {
                s.pop();
                pluss[p]='-';
                p++;
                break;
            }
        }
    }
    for(int i=0;i<p;i++)
    {
        cout << pluss[i] << '\n';
    }
    return 0;
}