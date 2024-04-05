#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    int sum=0;
    int arr[15][15];
    scanf("%d",&T);
    for(int a=1;a<=14;a++)
    {
        arr[0][a]=a;
    }
    for(int c=1;c<=14;c++) {
        for (int a = 1; a <= 14; a++)
        {
            for (int b = 1; b <= a; b++)
            {
                sum += arr[c - 1][b];
            }
            arr[c][a]=sum;
            sum=0;
        }
    }
    for(int a=0;a<T;a++)
    {
        int k,n;
        scanf("%d %d",&k,&n);
        printf("%d\n",arr[k][n]);
    }
}