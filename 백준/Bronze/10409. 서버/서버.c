int main()
{
    int n,T;
    int sum=0;
    scanf("%d %d",&n,&T);
    for(int a=1;a<=n;a++)
    {
        int x;
        scanf("%d",&x);
        sum+=x;
        if(sum>T)
        {
            printf("%d",a-1);
            return 0;
        }
    }
    printf("%d",n);
    return 0;
}