int main()
{
    int x,y,i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d",&x,&y);
        printf("Case #%d: %d + %d = %d\n",i,x,y,x+y);
    }
    return 0;
}