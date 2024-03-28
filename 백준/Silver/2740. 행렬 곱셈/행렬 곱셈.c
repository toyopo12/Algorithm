#include <stdio.h>
#include <string.h>

int main() {
    int N,M,K;
    int I=0;
    int arr1[101][101];
    int arr2[101][101];
    scanf("%d %d",&N,&M);
    for(int i=0;i<N;i++) {
        for (int k = 0; k < M; k++)
            scanf("%d", &arr1[i][k]);
    }
    scanf("%d %d",&M,&K);
    for(int i=0;i<M;i++) {
        for (int k = 0; k < K; k++)
            scanf("%d", &arr2[i][k]);
    }
    for(int i=0;i<N;i++)
    {
        for(int k = 0; k < K; k++)
        {
            for (int j = 0; j < M; j++)
                I += arr1[i][j] * arr2[j][k];
            printf("%d ",I);
            I=0;
        }
        printf("\n");
    }
    return 0;
}