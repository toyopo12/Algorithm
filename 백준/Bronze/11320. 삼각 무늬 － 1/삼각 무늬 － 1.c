int main()
{
    int T;
    int sum=0;
    scanf("%d",&T);
    for(int a=0;a<T;a++)
    {
        int A,B;
        scanf("%d %d",&A,&B);
        for(int b=1;b<=A/B;b++)
        {
            sum+=2*b-1;
        }
        printf("%d\n",sum);
        sum=0;
    }
    return 0;
}