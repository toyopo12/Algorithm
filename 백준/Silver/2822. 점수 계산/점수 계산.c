int main()
{
    int arr[8]={0,};
    int zap[8]={0,};
    int temp;
    int sum=0;
    for(int a=0;a<8;a++)
    {
        scanf("%d",&arr[a]);
        zap[a]=arr[a];
    }
    for(int a=0;a<8;a++)
    {
        for(int b=0;b<8;b++)
        {
            if(arr[a]<arr[b])
            {
                temp=arr[a];
                arr[a]=arr[b];
                arr[b]=temp;
            }
        }
    }
    for(int a=3;a<8;a++)
    {
        sum+=arr[a];
    }
    printf("%d\n",sum);
    for(int a=0;a<8;a++)
    {
        for(int b=3;b<8;b++)
        {
            if(zap[a] == arr[b])
            {
                printf("%d ",a+1);
            }
        }
    }
    return 0;
}