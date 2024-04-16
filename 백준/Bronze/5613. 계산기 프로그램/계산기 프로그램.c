int main()
{
    int sum;
    scanf("%d",&sum);
    while(1)
    {
        int x;
        char y;
        scanf("%c",&y);
        if(y=='=')
        {
            break;
        }
        else if(y=='+')
        {
            scanf("%d",&x);
            sum+=x;
        }
        else if(y=='-')
        {
            scanf("%d",&x);
            sum-=x;
        }
        else if(y=='*')
        {
            scanf("%d",&x);
            sum*=x;
        }
        else if(y=='/')
        {
            scanf("%d",&x);
            sum/=x;
        }
    }
    printf("%d",sum);
    return 0;
}