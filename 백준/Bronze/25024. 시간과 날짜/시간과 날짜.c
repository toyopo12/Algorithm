int main()
{
    int T;
    scanf("%d",&T);
    for(int a=0;a<T;a++)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        if(x<24 && y<60)
        {
            printf("Yes ");
        }
        else
        {
            printf("No ");
        }
        if(x==1 || x==3 || x==5 || x==7 || x==8 || x==10 || x==12)
        {
            if(y<=31 && 1<=y)
            {
                printf("Yes");
            }
            else
            {
                printf("No");
            }
        }
        else if(x==4 || x==6 || x==9 || x==11)
        {
            if(y<=30 && 1<=y)
            {
                printf("Yes");
            }
            else
            {
                printf("No");
            }
        }
        else if(x==2)
        {
            if(y<=29 && 1<=y)
            {
                printf("Yes");
            }
            else
            {
                printf("No");
            }
        }
        else
        {
            printf("No");
        }
        printf("\n");
    }
    return 0;
}