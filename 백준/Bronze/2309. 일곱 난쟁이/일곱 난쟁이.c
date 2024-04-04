int main()
{
    int arr[9];
    int sum=0;
    int brr[2];
    int temp;
    for(int a=0;a<9;a++)
    {
        scanf("%d",&arr[a]);
        sum+=arr[a];
    }
    for(int a=0;a<9;a++)
    {
        for(int b=a+1;b<9;b++)
        {
            if(sum-arr[a]-arr[b]==100)
            {
                brr[0]=arr[a];
                brr[1]=arr[b];
                break;
            }
        }
    }
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(arr[i]<arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i=0;i<9;i++)
    {
        if(arr[i]!=brr[1] && arr[i]!=brr[0])
            printf("%d\n",arr[i]);
    }
    return 0;
}