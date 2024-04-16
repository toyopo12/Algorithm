int main()
{
    int N,L;
    int arr[1001];
    int temp;
    scanf("%d %d",&N,&L);
    for(int a=0;a<N;a++)
    {
        scanf("%d",&arr[a]);
    }
    for(int a=0;a<N;a++)
    {
        for(int b=0;b<N;b++)
        {
            if(arr[a]<arr[b])
            {
                temp=arr[a];
                arr[a]=arr[b];
                arr[b]=temp;
            }
        }
    }
    for(int a=0;a<N;a++)
    {
        if(arr[a]>L)
        {
            break;
        }
        L++;
    }
    printf("%d",L);
    return 0;
}