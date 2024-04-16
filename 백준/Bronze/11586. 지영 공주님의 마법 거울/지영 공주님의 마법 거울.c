int main()
{
    char arr[101][101];
    int N,K;
    scanf("%d",&N);
    for(int a=0;a<N;a++)
    {
        for(int b=0;b<N;b++)
        {
            scanf(" %c",&arr[a][b]);
        }
    }
    scanf("%d",&K);
    if(K==1)
    {
        for(int a=0;a<N;a++)
        {
            for(int b=0;b<N;b++)
            {
                printf("%c",arr[a][b]);
            }
            printf("\n");
        }
    }
    else if(K==2)
    {
        for(int a=0;a<N;a++)
        {
            for(int b=N-1;b>=0;b--)
            {
                printf("%c",arr[a][b]);
            }
            printf("\n");
        }
    }
    else if(K==3)
    {
        for(int a=N-1;a>=0;a--)
        {
            for(int b=0;b<N;b++)
            {
                printf("%c",arr[a][b]);
            }
            printf("\n");
        }
    }
    return 0;
}