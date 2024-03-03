int main()
{
    int x;
    int y;
    int z;
    scanf("%d %d %d",&x,&y,&z);
    if ( x != y && y !=z && z != x)
    {
        if ( x >= y )
        {
            y=x;
            if ( x >= z )
            {
                z=x;
                printf("%d",100*x);
            }
            else if ( x <= z )
            {
                x=z;
                printf("%d",100*x);
            }

        }
        else if ( x <= y )
        {
            x=y;
            if ( x >= z )
            {
                z=x;
                printf("%d",100*x);
            }
            else if ( x <= z )
            {
                x=z;
                printf("%d",100*x);
            }
        }
    }
    else if ( x == y && y == z && z == x)
    {
        printf("%d",10000+1000*x);
    }
    else
    {
        if ( x == y )
        {
            printf("%d",1000+x*100);

        }
        else if ( y == z )
        {
            printf("%d",1000+y*100);
        }
        else
        {
            printf("%d", 1000 + x * 100);
        }
    }
    return 0;
}