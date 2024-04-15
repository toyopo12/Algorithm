int main()
{
    int x,y;
    long long sum=0;
    scanf("%d %d",&x,&y);
    sum=x+y;
    sum*=x-y;
    printf("%lld",sum);
    return 0;
}