int main()
{
    int T;
    scanf("%d",&T);
    for(int a=0;a<T;a++)
    {
        int n;
        int max=0;
        scanf("%d",&n);
        int arr[101]={0,};
        for(int b=1;b<=n;b++)
        {
            for(int c=1;c<=n/b;c++)
            {
                if(arr[c*b]==0)
                {
                    arr[c*b]=1;
                }
                else if(arr[c*b]==1)
                {
                    arr[c*b]=0;
                }
            }
        }
        for(int b=1;b<=n;b++)
        {
            if(arr[b]==1)
            {
                max++;
            }
        }
        printf("%d\n",max);
    }
    return 0;
}