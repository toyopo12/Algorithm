#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> de;
    int size;
    scanf("%d",&size);
    while(1)
    {
        int n;
        scanf("%d",&n);
        if(n==-1)
        {
            break;
        }
        else if(n==0)
        {
            de.pop_front();
        }
        else
        {
            if(de.size()<size)
            {
                de.push_back(n);
            }
        }
    }
    if(de.size()==0)
    {
        printf("empty");
    }
    else
    {
        while(de.size()!=0)
        {
            printf("%d ",de.front());
            de.pop_front();
        }
    }
    return 0;
}