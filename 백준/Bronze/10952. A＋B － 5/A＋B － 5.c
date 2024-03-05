int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    while(x+y!=0 && x*y!=0)
    {
        printf("%d\n",x+y);
        scanf("\n%d %d",&x,&y);
    }
    return 0;
}