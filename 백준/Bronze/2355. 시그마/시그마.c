int main()
{
    long long a,b;
    long long sum=1;
    scanf("%lld %lld",&a,&b);
    if(a<b)
    {
        sum *= a + b;
        sum *= b - a + 1;
        sum /= 2;
    }
    else
    {
        sum *= a + b;
        sum *= a - b + 1;
        sum /= 2;
    }
    printf("%lld",sum);
    return 0;
}