int main()
{
    int T;
    int count=0;
    scanf("%d",&T);
    for(int A=1;A<=T;A++)
    {
        int N,D;
        scanf("%d %d",&N,&D);
        for(int B=0;B<N;B++)
        {
            int v,f,c;
            scanf("%d %d %d",&v,&f,&c);
            if((float)D/(float)v<=(float)f/(float)c)
            {
                count++;
            }
        }
        printf("%d\n",count);
        count=0;
    }
    return 0;
}