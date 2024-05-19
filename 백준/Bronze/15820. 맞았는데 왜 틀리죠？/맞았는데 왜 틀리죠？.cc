#include <iostream>

using namespace std;

int main()
{
    int s1,s2;
    scanf("%d %d",&s1,&s2);
    for(int i=0;i<s1;i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        if(a!=b)
        {
            printf("Wrong Answer");
            return 0;
        }
    }
    for(int i=0;i<s2;i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        if(a!=b)
        {
            printf("Why Wrong!!!");
            return 0;
        }
    }
    printf("Accepted");
    return 0;
}