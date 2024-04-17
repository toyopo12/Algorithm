int main()
{
    long long a,b;
    scanf("%lld %lld",&a,&b);
    if(a<=b)
    {
        if(b%2==1)
        {
            printf("%lld",b/2*a+a/2);
        }
        else if(b%2==0)
        {
            printf("%lld",b/2*a);
        }
    }
    else if(a>b)
    {
        if(a%2==1)
        {
            printf("%lld",a/2*b+b/2);
        }
        else if(a%2==0)
        {
            printf("%lld",a/2*b);
        }
    }
    return 0;
}