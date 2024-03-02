int main()
{
    int x;
    int y;
    scanf("%d %d",&x,&y);
    if (x==0 && y<45)
    {
        y += 15;
        printf("23 %d",y);
    }
    else if (y<45)
    {
        x -= 1;
        y += 15;
        printf("%d %d",x,y);
    }
    else
    {
        y -= 45;
        printf("%d %d",x,y);
    }
    return 0;
}