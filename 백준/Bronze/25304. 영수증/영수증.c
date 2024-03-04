int main()
{
    int a,b,c,d,i,sum=0;
    scanf("%d\n%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        scanf("%d %d",&c,&d);
        sum += c*d;
    }
    if (a==sum)
        printf("Yes");
    else
        printf("No");
    return 0;

}