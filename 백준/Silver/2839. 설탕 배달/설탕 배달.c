int main()
{
    int N;
    int hello=0;
    scanf("%d",&N);
    for(int a=3;a<N+1;a++)
    {
        for(int b=0;b<=N/5;b++)
        {
            if((N-5*b)%3==0)
            {
                hello=b+(N-5*b)/3;
            }
        }
    }
    if(hello==0)
    {
        printf("-1");
        return 0;
    }
    printf("%d",hello);
    return 0;
}