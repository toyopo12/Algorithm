#include <stdio.h>

int main()
{
    char arr;
    int abc[27]={0,};
    int max=0;
    while(1)
    {
        if(scanf("%c",&arr)==EOF)
        {
            break;
        }
        abc[arr-97]++;
    }
    for(int a=0;a<26;a++)
    {
        if(abc[a]>max)
        {
            max=abc[a];
        }
    }
    for(int a=0;a<26;a++)
    {
        if(abc[a]==max)
        {
            printf("%c",a+97);
        }
    }
    return 0;
}