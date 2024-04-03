int main()
{
    int sum=0;
    for(int a=0;a<4;a++)
    {
        int x;
        scanf("%d",&x);
        sum+=x;
    }
    printf("%d\n%d",sum/60,sum%60);
    return 0;
}