int main()
{
    int N;
    long long sum=1;
    scanf("%d",&N);
    if(N==0)
    {
        printf("1");
        return 0;
    }
    for(int a=1;a<=N;a++)
    {
        sum*=a;
    }
    printf("%lld",sum);
    return 0;
}