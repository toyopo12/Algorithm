#include <stdio.h>
#include <string.h>

int main() {
    int arr[100][100]={0,};
    int x;
    int i=0;
    scanf("%d",&x);
    for(int a=0;a<x;a++)
    {
        int X,Y;
        scanf("%d %d",&X,&Y);
        for(int b=Y;b<Y+10;b++) {
            for (int c = X; c < X + 10; c++)
                arr[b][c] = 1;
        }
    }
    for(int d=0;d<100;d++) {
        for(int e=0;e<100;e++)
        {
            if(arr[d][e]==1)
                i++;
        }
    }
    printf("%d",i);
    return 0;
}