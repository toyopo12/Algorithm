int main()
{
    while(1)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        if(a==0&&b==0)
        {
            return 0;
        }
        else
            printf("%d\n",a+b);
    }
}