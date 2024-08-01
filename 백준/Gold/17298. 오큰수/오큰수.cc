#include <iostream>
#include <stack>

using namespace std;

int arr[1000100];

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    stack<int> hi,num;
    int n;
    cin >> n;
    hi.push(1000100);
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        while(hi.top()<x)
        {
            arr[num.top()]=x;
            hi.pop();
            num.pop();
        }
        hi.push(x);
        num.push(i);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            cout << "-1";
        }
        else
        {
            cout << arr[i];
        }
        cout << " ";
    }
    return 0;
}