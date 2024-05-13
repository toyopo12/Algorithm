#include <iostream>

using namespace std;

int main()
{
    int n;
    int sum=0;
    int room[101]={0};
    scanf("%d",&n);
    int t;
    scanf("%d",&t);
    for(int i=0;i<n;i++)
    {
        room[i]=1;
    }
    for(int i=0;i<t;i++)
    {
        int a,b;
        int count=0;
        scanf("%d %d",&a,&b);
        for(int j=a;j<b;j++)
        {
            room[j]=0;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(room[i]==1)
        {
            sum++;
        }
    }
    printf("%d",sum);
}