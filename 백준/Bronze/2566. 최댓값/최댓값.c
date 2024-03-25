#include <stdio.h>
#include <string.h>

int main()
{
    int arr1[9][9];
    int maxi=1,mak=1,x;
    for(int i=0;i<9;i++)
    {
        for(int k=0;k<9;k++)
            scanf("%d",&arr1[i][k]);
    }
    x=arr1[1][1];
    for(int i=0;i<9;i++)
    {
        for(int k=0;k<9;k++) {
            if (arr1[i][k] > x) {
                maxi = i;
                mak = k;
                x = arr1[i][k];
            }
        }
    }
    printf("%d\n",arr1[maxi][mak]);
    printf("%d %d\n",maxi+1,mak+1);
    return 0;
}