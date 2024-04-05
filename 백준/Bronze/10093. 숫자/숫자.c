int main()
{
    long long A;
    long long B;
    scanf("%lld %lld",&A,&B);
    if(A<B)
    {
        printf("%lld\n", B - A - 1);
        for (long long a = A + 1; a < B; a++)
        {
            printf("%lld ", a);
        }
    }
    else if(B<A)
    {
        printf("%lld\n", A-B - 1);
        for (long long a = B + 1; a < A; a++)
        {
            printf("%lld ", a);
        }
    }
    else
        printf("0");
    return 0;
}