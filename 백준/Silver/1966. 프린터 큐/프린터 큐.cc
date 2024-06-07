#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int i=0;i<T;i++)
    {
        int target;
        int N,M;
        int count=0;
        queue<int> hi;
        cin >> N >> M;
        for(int j=0;j<N;j++)
        {
            int num;
            cin >> num;
            if(j==M)
            {
                target=num;
                hi.push(10);
            }
            else
            {
                hi.push(num);
            }
        }
        while(1)
        {
            hi:;
            int now=hi.front();
            if(now==10)
            {
                now=target;
            }
            for(int j=0;j<hi.size();j++)
            {
                hi.push(hi.front());
                hi.pop();
                if(hi.front()==10)
                {
                    if(target>now)
                    {
                        goto hi;
                    }
                }
                else
                {
                    if(hi.front()>now)
                    {
                        goto hi;
                    }
                }
            }
            count++;
            if(hi.front()==10)
            {
                break;
            }
            hi.pop();
        }
        cout << count << "\n";
    }
    return 0;
}