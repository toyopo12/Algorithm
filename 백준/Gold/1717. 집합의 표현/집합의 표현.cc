#include <iostream>

using namespace std;

int root[1000010];

int getroot(int a)
{
    if(root[a]==a)
    {
        return a;
    }
    else
    {
        return root[a] = getroot(root[a]);
    }
}

void unionroot(int a,int b) // 얘가 문제임
{
    int x=getroot(a);
    int y=getroot(b);
    if(x<y)
    {
        root[y]=x;
    }
    else
    {
        root[x]=y;
    }
}

void findroot(int a,int b)
{
    if(getroot(a)==getroot(b))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)
    {
        root[i]=i;
    }
    for(int i=0;i<m;i++)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if(a==0)
        {
            unionroot(b,c);
        }
        else
        {
            findroot(b,c);
        }
    }
    return 0;
}