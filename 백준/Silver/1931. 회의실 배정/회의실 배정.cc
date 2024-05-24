#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

typedef struct
{
    int start;
    int end;
}point;

bool compare(point a,point b)
{
    if(a.start==b.start)
    {
        return a.end < b.end;
    }
    else
    {
        return a.start < b.start;
    }
}

point hi[100100];

int main()
{
    int N;
    int sum=0;
    int now=INT_MAX;
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        scanf("%d %d",&hi[i].start,&hi[i].end);
    }
    sort(hi,hi+N,compare);
    for(int i=N-1;i>=0;i--)
    {
        if(hi[i].end<=now)
        {
            now=hi[i].start;
            sum++;
        }
    }
    printf("%d",sum);
    return 0;
}