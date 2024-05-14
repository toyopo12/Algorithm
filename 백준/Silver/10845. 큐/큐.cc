#include <iostream>
#include <algorithm>
#include <cstring>
#include <queue>

using namespace std;

int main()
{
    queue<int> queue;
    int n;
    scanf("%d",&n);
    for(int a=0;a<n;a++)
    {
        char n[6];
        scanf("%s",n);
        if(n[0]=='p')
        {
            if(n[1]=='u')
            {
                int num;
                scanf("%d",&num);
                queue.push(num);
            }
            else
            {
                if(queue.size()==0)
                {
                    printf("-1\n");
                }
                else
                {
                    printf("%d\n",queue.front());
                    queue.pop();
                }
            }
        }
        else if(n[0]=='s')
        {
            printf("%ld\n",queue.size());
        }
        else if(n[0]=='e')
        {
            if(queue.size()==0)
            {
                printf("1\n");
            }
            else
            {
                printf("0\n");
            }
        }
        else if(n[0]=='f')
        {
            if(queue.size()==0)
            {
                printf("-1\n");
            }
            else
            {
                printf("%d\n",queue.front());
            }
        }
        else if(n[0]=='b')
        {
            if(queue.size()==0)
            {
                printf("-1\n");
            }
            else
            {
                printf("%d\n",queue.back());
            }
        }
    }
    return 0;
}