#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int a=0;a<n;a++)
    {
        char s[10010];
        char p[101];
        scanf("%s %s",s,p);
        int time=0;
        for(int b=0;b<strlen(s)-strlen(p)+1;b++)
        {
            if(s[b]==p[0])
            {
                for(int c=0;c<strlen(p);c++)
                {
                    if(s[c+b]!=p[c])
                    {
                        goto hi;
                    }
                }
                time++;
                b+=strlen(p)-1;
            }
            hi:;
        }
        int sum=time+strlen(s)-time*strlen(p);
        printf("%d\n",sum);
    }
    return 0;
}