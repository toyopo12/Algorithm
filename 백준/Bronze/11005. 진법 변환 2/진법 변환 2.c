#include <stdio.h>
#include <string.h>

int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    int i=0;
    int ans[100000];

    int n = x;
    while(n!=0)
    {
        int namu = n % y;
        n = n / y;
        ans[i++] = namu;
    }
    for(int a=i-1;a>=0;a--)
    {
        if (ans[a] >= 10)
            printf("%c", ans[a] + 55);
        else
            printf("%d", ans[a]);
    }
    return 0;
}