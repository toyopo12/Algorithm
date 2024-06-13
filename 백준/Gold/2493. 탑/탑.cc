#include <iostream>
#include <stack>

using namespace std;

stack<int> hi;
stack<int> number;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    int first;
    cin >> n >> first;
    hi.push(first);
    number.push(1);
    cout << "0 ";
    for(int i=2;i<=n;i++)
    {
        int x;
        cin >> x;
        if(hi.top()>x)
        {
            cout << number.top() << " ";
            hi.push(x);
            number.push(i);
        }
        else
        {
            while(hi.top()<x)
            {
                hi.pop();
                number.pop();
                if(hi.size()==0)
                {
                    cout << "0 ";
                    hi.push(x);
                    number.push(i);
                    goto hi;
                }
            }
            cout << number.top() << " ";
            hi.push(x);
            number.push(i);
            hi:;
        }
    }
    return 0;
}