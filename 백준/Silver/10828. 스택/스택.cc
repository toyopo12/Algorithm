#include <iostream>
#include <algorithm>
#include <cstring>
#include <stack>

using namespace std;

int main()
{
    stack<int> stack;
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
                stack.push(num);
            }
            else
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
        }
        else if(n[0]=='s')
        {
            printf("%ld\n",stack.size());
        }
        else if(n[0]=='e')
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
        else if(n[0]=='t')
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