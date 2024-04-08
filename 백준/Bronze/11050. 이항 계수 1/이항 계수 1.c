int main()
{
    int N,K;
    scanf("%d %d",&N,&K);
    int sum=1;
    for(int a=N;a>K;a--)
    {
        sum*=a;
    }
    for(int a=1;a<=N-K;a++)
    {
        sum/=a;
    }
    printf("%d",sum);
    return 0;
}