#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> deque;
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        deque.push_back(i);
    }
    while(n!=1)
    {
        deque.pop_front();
        deque.push_back(deque.front());
        deque.pop_front();
        n--;
    }
    cout << deque.front();
    return 0;
}