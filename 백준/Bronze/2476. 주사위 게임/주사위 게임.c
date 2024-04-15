int main()
{
    int N;
    int max=0;
    int sum=0;
    scanf("%d",&N);
    for(int a=0;a<N;a++)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if(a==b && b==c)
        {
            sum=10000+1000*a;
        }
        else if(a==b && a!=c)
        {
            sum=1000+100*a;
        }
        else if(a==c && a!=b)
        {
            sum=1000+100*a;
        }
        else if(c==b && a!=c)
        {
            sum=1000+100*c;
        }
        else
        {
            if(a<b && b<c)
            {
                sum=100*c;
            }
            else if(a<c && c<b)
            {
                sum=100*b;
            }
            else if(b<a && a<c)
            {
                sum=100*c;
            }
            else if(b<c && c<a)
            {
                sum=100*a;
            }
            else if(c<a && a<b)
            {
                sum=100*b;
            }
            else
            {
                sum=100*a;
            }
        }
        if(max<sum)
        {
            max=sum;
        }
        sum=0;
    }
    printf("%d",max);
    return 0;
}