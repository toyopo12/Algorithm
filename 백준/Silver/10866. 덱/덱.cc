#include <iostream>
#include <string>
#include <deque>

using namespace std;

int main()
{
    deque<int> deque;
    int n;
    scanf("%d",&n);
    for(int a=0;a<n;a++)
    {
        string str;
        cin >> str;
        if(str=="push_front")
        {
            int num;
            scanf("%d",&num);
            deque.push_front(num);
        }
        else if(str=="push_back")
        {
            int num;
            scanf("%d",&num);
            deque.push_back(num);
        }
        else if(str=="pop_front")
        {
            if(deque.size()==0)
            {
                printf("-1\n");
            }
            else
            {
                printf("%d\n",deque.front());
                deque.pop_front();
            }
        }
        else if(str=="pop_back")
        {
            if(deque.size()==0)
            {
                printf("-1\n");
            }
            else
            {
                printf("%d\n",deque.back());
                deque.pop_back();
            }
        }
        else if(str=="size")
        {
            printf("%ld\n",deque.size());
        }
        else if(str=="empty")
        {
            if(deque.size()==0)
            {
                printf("1\n");
            }
            else
            {
                printf("0\n");
            }
        }
        else if(str=="front")
        {
            if(deque.size()==0)
            {
                printf("-1\n");
            }
            else
            {
                printf("%d\n",deque.front());
            }
        }
        else if(str=="back")
        {
            if(deque.size()==0)
            {
                printf("-1\n");
            }
            else
            {
                printf("%d\n",deque.back());
            }
        }
    }
    return 0;
}