#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int N;
    int two=0;
    int five=0;
    scanf("%d",&N);
    for(int a=2;a<=N;a++)
    {
        int sample=a;
        while(1)
        {
            if(sample%5==0 || sample%2==0)
            {
                if(sample%2==0)
                {
                    two++;
                    sample/=2;
                }
                if(sample%5==0)
                {
                    five++;
                    sample/=5;
                }
            }
            else
            {
                break;
            }
        }
    }
    if(two<=five)
    {
        printf("%d",two);
    }
    else
    {
        printf("%d",five);
    }
    return 0;
}