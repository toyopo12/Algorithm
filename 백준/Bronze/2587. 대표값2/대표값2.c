int main()
{
    int sum=0;
    int arr[5];
    int temp;
    for(int a=0;a<5;a++)
    {
        scanf("%d",&arr[a]);
        sum+=arr[a];
    }
    for(int a=0;a<5;a++)
    {
        for(int b=0;b<5;b++)
        {
            if(arr[a]<arr[b])
            {
                temp=arr[a];
                arr[a]=arr[b];
                arr[b]=temp;
            }
        }
    }
    printf("%d\n%d",sum/5,arr[2]);
    return 0;
}