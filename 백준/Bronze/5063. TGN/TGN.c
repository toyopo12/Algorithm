int main()
{
    int N;
    scanf("%d",&N);
    for(int a=0;a<N;a++)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if(a+c<b)
        {
            printf("advertise");
        }
        else if(a+c==b)
        {
            printf("does not matter");
        }
        else
        {
            printf("do not advertise");
        }
        printf("\n");
    }
    return 0;
}