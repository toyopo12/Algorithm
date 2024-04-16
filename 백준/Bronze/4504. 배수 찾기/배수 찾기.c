int main()
{
    int n;
    scanf("%d",&n);
    while(1)
    {
        int x;
        scanf("%d",&x);
        if(x==0)
        {
            break;
        }
        if(x%n==0)
        {
            printf("%d is a multiple of %d.",x,n);
        }
        else if(x%n!=0)
        {
            printf("%d is NOT a multiple of %d.",x,n);
        }
        printf("\n");
    }
    return 0;
}