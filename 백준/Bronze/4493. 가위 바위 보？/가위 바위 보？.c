int main()
{
    int N;
    int p1=0,p2=0;
    scanf("%d",&N);
    for(int a=0;a<N;a++)
    {
        int n;
        scanf("%d",&n);
        for(int b=0;b<n;b++)
        {
            char x,y;
            scanf(" %c %c",&x,&y);
            if(x=='R' && y=='P')
            {
                p2++;
            }
            else if(x=='R' && y=='S')
            {
                p1++;
            }
            else if(x=='P' && y=='R')
            {
                p1++;
            }
            else if(x=='P' && y=='S')
            {
                p2++;
            }
            else if(x=='S' && y=='R')
            {
                p2++;
            }
            else if(x=='S' && y=='P')
            {
                p1++;
            }
        }
        if(p1>p2)
        {
            printf("Player 1");
        }
        else if(p1<p2)
        {
            printf("Player 2");
        }
        else
        {
            printf("TIE");
        }
        printf("\n");
        p1=0;
        p2=0;
    }
    return 0;
}