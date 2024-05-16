#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> stack;
    int N;
    scanf("%d",&N);
    for(int a=0;a<N;a++)
    {
        int n;
        scanf("%d",&n);
        if(n==1)
        {
            int num;
            scanf("%d",&num);
            stack.push(num);
        }
        else if(n==2)
        {
            if(stack.size()==0)
            {
                printf("-1\n");
            }
            else
            {
                printf("%d\n",stack.top());
                stack.pop();
            }
        }
        else if(n==3)
        {
            printf("%ld\n",stack.size());
        }
        else if(n==4)
        {
            if(stack.size()==0)
            {
                printf("1\n");
            }
            else
            {
                printf("0\n");
            }
        }
        else if(n==5)
        {
            if(stack.size()==0)
            {
                printf("-1\n");
            }
            else
            {
                printf("%d\n",stack.top());
            }
        }
    }
    return 0;
}