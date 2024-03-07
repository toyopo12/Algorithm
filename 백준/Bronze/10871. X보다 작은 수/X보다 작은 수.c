int main()
{
    int x,y;
    int good[10001];

    scanf("%d %d",&x,&y);
    for(int i=0;i<x;i++)
    {
        scanf("%d ",&good[i]);
        if(y>good[i])
            printf("%d ",good[i]);
    }
    return 0;
}