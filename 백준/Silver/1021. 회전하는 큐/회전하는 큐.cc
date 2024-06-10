#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int N,M;
    int sum=0;
    queue<int> hi;
    cin >> N >> M;
    for(int i=1;i<=N;i++)
    {
        hi.push(i);
    }
    for(int i=0;i<M;i++)
    {
        int x;
        int count=0;
        cin >> x;
        while(hi.front()!=x)
        {
            hi.push(hi.front());
            hi.pop();
            count++;
        }
        if(count>hi.size()/2)
        {
            sum+=hi.size()-count;
        }
        else
        {
            sum+=count;
        }
        hi.pop();
    }
    cout << sum;
    return 0;
}