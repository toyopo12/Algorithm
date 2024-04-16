int main()
{
    int a,b,c;
    int good;
    int sum=0;
    scanf("%d %d %d",&a,&b,&c);
    good=a+b;
    while(good>=c)
    {
        sum+=good/c;
        good=good-(c-1)*(good/c);
    }
    printf("%d",sum);
    return 0;
}