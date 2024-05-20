#include <iostream>
#include <algorithm>

typedef struct
{
    int x;
    int y;
}point;

using namespace std;

bool compare(point a,point b) 
{
	if (a.y == b.y) 
    {		
		return a.x < b.x;		
	}
	else 
    {						
		return a.y < b.y;
	}
}

int main()
{
    int n;
    scanf("%d",&n);
    point hi[100100];
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&hi[i].x,&hi[i].y);
    }
    sort(hi,hi+n,compare);
    for(int i=0;i<n;i++)
    {
        printf("%d %d\n",hi[i].x,hi[i].y);
    }
    return 0;
}