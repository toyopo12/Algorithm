int main()
{
    int N,K;
    int W[7]={0,};
    int M[7]={0,};
    int sum=0;
    scanf("%d %d",&N,&K);
    for(int a=0;a<N;a++)
    {
        int S,Y;
        scanf("%d %d",&S,&Y);
        if(S==0)
        {
            W[Y]++;
        }
        else
        {
            M[Y]++;
        }
    }
    for(int a=1;a<=6;a++)
    {
        sum+=W[a]/K+1+M[a]/K+1;
        if(W[a]%K==0)
            sum--;
        if(M[a]%K==0)
            sum--;
    }
    printf("%d",sum);
    return 0;
}