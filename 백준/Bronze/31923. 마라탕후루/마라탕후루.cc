#include <iostream>

using namespace std;

typedef struct
{
    int red;
    int green;
}point;

int main()
{
    int N,P,Q;
    int arr[110]={0};
    point hi[110];
    scanf("%d%d%d",&N,&P,&Q);
    for(int i=0;i<N;i++)
    {
        scanf("%d",&hi[i].red);
    }
    for(int i=0;i<N;i++)
    {
        scanf("%d",&hi[i].green);
    }
    if(P>Q)
    {
        int pp=P-Q;
        for(int i=0;i<N;i++)
        {
            if(hi[i].red<=hi[i].green)
            {
                if((hi[i].green-hi[i].red)%pp==0)
                {
                    arr[i]=(hi[i].green-hi[i].red)/pp;
                    if(arr[i]>=10000)
                    {
                        printf("NO");
                        return 0;
                    }
                }
                else
                {
                    printf("NO");
                    return 0;
                }
            }
            else
            {
                printf("NO");
                return 0;
            }
        }
    }
    else if(P<Q)
    {
        int pp=Q-P;
        for(int i=0;i<N;i++)
        {
            if(hi[i].green<=hi[i].red)
            {
                if((hi[i].red-hi[i].green)%pp==0)
                {
                    arr[i]=(hi[i].red-hi[i].green)/pp;
                    if(arr[i]>=10000)
                    {
                        printf("NO");
                        return 0;
                    }
                }
                else
                {
                    printf("NO");
                    return 0;
                }
            }
            else
            {
                printf("NO");
                return 0;
            }
        }
    }
    else if(P==Q)
    {
        for(int i=0;i<N;i++)
        {
            if(hi[i].green!=hi[i].red)
            {
                printf("NO");
                return 0;
            }
        }
    }
    printf("YES\n");
    for(int i=0;i<N;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}