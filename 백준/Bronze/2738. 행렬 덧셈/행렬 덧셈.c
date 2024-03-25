#include <stdio.h>
#include <string.h>

int main()
{
    int N,M;
    int arr1[101][101];
    int arr2[101][101];
    scanf("%d %d",&N,&M);
    for(int i=0;i<N;i++) {
        for (int k = 0; k < M; k++)
            scanf("%d", &arr1[i][k]);
    }
    for(int i=0;i<N;i++) {
        for (int k = 0; k < M; k++)
            scanf("%d", &arr2[i][k]);
    }
    for(int i=0;i<N;i++) {
        for (int k = 0; k < M; k++)
            printf("%d ", arr1[i][k] + arr2[i][k]);
        printf("\n");
    }
    return 0;
}