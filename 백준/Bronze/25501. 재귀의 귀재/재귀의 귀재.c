#include <stdio.h>
#include <string.h>

int a;

int recursion(char *s, int l, int r)
{
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else
    {
        a++;
        return recursion(s, l+1, r-1);
    }
}

int isPalindrome(char *s)
{
    a++;
    return recursion(s, 0, strlen(s)-1);
}

int main()
{
    int T;
    char S[1010];
    scanf("%d",&T);


    for(int A=0;A<T;A++)
    {
        scanf("%s",&S);
        printf("%d",isPalindrome(&S));
        printf(" %d\n",a);
        a=0;
    }
    return 0;
}