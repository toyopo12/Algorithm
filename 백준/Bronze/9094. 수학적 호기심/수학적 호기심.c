int main()
{
    int N;
    int i=0;
    int temp;
    scanf("%d",&N);
    for(int A=1;A<=N;A++)
    {
        int n,m;
        scanf("%d %d",&n,&m);
        for(int a=1;a<n-1;a++)
        {
            for(int b=a+1;b<n;b++)
            {
                if((a*a+b*b+m)%(a*b)==0)
                {
                    i++;
                }
            }
        }
        printf("%d\n",i);
        i=0;
    }
    return 0;
}