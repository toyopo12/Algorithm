#include <iostream>

using namespace std;

int main()
{
    int arr[101][101]={0};
    int sum=0;
    for(int i=0;i<4;i++)
    {
        int x1,y1,x2,y2;
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        for(int a=x1;a<x2;a++)
        {
            for(int b=y1;b<y2;b++)
            {
                arr[a][b]++;
            }
        }
    }
    for(int a=1;a<100;a++)
    {
        for(int b=1;b<100;b++)
        {
            if(arr[a][b]!=0)
            {
                sum++;
            }
        }
    }
    printf("%d",sum);
    return 0;
}