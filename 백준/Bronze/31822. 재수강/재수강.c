#include <stdio.h>

int main()
{
    char hi[11];
    scanf("%s",hi);
    int N;
    int sum=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        char point[11];
        scanf("%s",point);
        if(hi[0]==point[0] && hi[1]==point[1] && hi[2]==point[2] && hi[3]==point[3] && hi[4]==point[4])
        {
            sum++;
        }
    }
    printf("%d",sum);
    return 0;
}