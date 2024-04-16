int main()
{
    int T;
    scanf("%d",&T);
    for(int a=0;a<T;a++)
    {
        int N,M;
        scanf("%d %d",&N,&M);
        printf("%d %d\n",2*M-N,N-M);
    }
    return 0;
}