int main()
{
    long long sum;
    int N;
    scanf("%d",&N);
    sum=N;
    sum*=(N-1);
    sum/=2;
    sum*=(N+1);
    printf("%lld",sum);
    return 0;
}