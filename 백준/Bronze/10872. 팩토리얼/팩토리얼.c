int main()
{
    int n;
    scanf("%d",&n);
    int sum=1;
    if(n==0)
    {
        printf("1");
        return 0;
    }
    else
    {
        for(int a=1;a<=n;a++)
        {
            sum*=a;
        }
    }
    printf("%d",sum);
    return 0;
}