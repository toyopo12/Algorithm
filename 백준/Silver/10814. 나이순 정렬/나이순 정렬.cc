#include <iostream>
#include <algorithm>

typedef struct
{
    int age;
    char name[101];
    int fast;
}point;

using namespace std;

bool compare(point a,point b) 
{
	if (a.age == b.age) 
    {		
		return a.fast < b.fast;		
	}
	else 
    {						
		return a.age < b.age;
	}
}

point hi[100100];

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %s",&hi[i].age,hi[i].name);
        hi[i].fast=i;
    }
    sort(hi,hi+n,compare);
    for(int i=0;i<n;i++)
    {
        printf("%d %s\n",hi[i].age,hi[i].name);
    }
    return 0;
}