int main()
{
    int n;
    int sum=0;
    int wa=0,wb=0;
    scanf("%d",&n);
    for(int a=0;a<n;a++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        if(a>b)
            wa++;
        if(a<b)
            wb++;
    }
    printf("%d %d",wa,wb);
    return 0;
}