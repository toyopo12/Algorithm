int main()
{
    int T;
    scanf("%d",&T);
    for(int a=0;a<T;a++)
    {
        int d;
        scanf("%d",&d);
        for(int b=1;b<=d;b++)
        {
            if(b+b*b>d)
            {
                printf("%d\n",b-1);
                goto hi;
            }
        }
        hi:;
    }
    return 0;
}