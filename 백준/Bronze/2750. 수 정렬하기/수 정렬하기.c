int main()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    int temp;
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
        printf("%d\n",arr[a]);
    }
    return 0;
}