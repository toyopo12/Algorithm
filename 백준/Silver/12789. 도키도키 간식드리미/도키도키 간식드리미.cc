#include <iostream>
#include <stack>

using namespace std;

stack<int> s;

int main()
{
    int count=1;
    int N;
    cin >> N;
    for(int i=0;i<N;i++)
    {
        int x;
        cin >> x;
        if(x==count)
        {
            count++;
            while(s.size()!=0)
            {
                if(s.top()==count)
                {
                    s.pop();
                    count++;
                }
                else
                {
                    break;
                }
            }
        }
        else
        {
            s.push(x);
        }
    }
    if(s.size()!=0)
    {
        cout << "Sad";
    }
    else
    {
        cout << "Nice";
    }
    return 0;
}