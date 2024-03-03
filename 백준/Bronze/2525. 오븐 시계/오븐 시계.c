int main()
{
    int x;
    int y;
    int z;
    int a;
    int b;
    scanf("%d %d\n%d",&x,&y,&z);
    a = z/60;
    b = z%60;

    if ( y+b>=60 )
    {
        x += 1;
        y -= 60;

        if ( x + a >= 24 )
        {
            x -= 24;
            printf("%d %d",x+a,y+b);
        }
        else
            printf("%d %d",x+a,y+b);
    }
    else
    {
        if ( x + a >= 24 )
        {
            x -= 24;
            printf("%d %d",x+a,y+b);
        }
        else
            printf("%d %d",x+a,y+b);
    }
    return 0;
}