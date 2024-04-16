int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    for(int A=0;A<c;A++)
    {
        if(a<b)
        {
            a++;
        }
        else if(a>b)
        {
            b++;
        }
        else if(a==b)
        {
            a++;
        }
    }
    if(a<b)
    {
        printf("%d",2*a);
    }
    else if(a>b)
    {
        printf("%d",2*b);
    }
    else if(a==b)
    {
        printf("%d",2*b);
    }
    return 0;
}