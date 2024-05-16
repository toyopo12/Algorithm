#include <iostream>
#include <algorithm>

typedef struct
{
    int g;
    int h;
}human;

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    human hi[51];
    int sum[51];
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&hi[i].g,&hi[i].h);
        sum[i]=1;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(hi[i].g<hi[j].g && hi[i].h<hi[j].h)
            {
                sum[i]++;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",sum[i]);
    }
    return 0;
}