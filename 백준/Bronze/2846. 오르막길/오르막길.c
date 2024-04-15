int main()
{
    int N;
    int max=0;
    int sum=0;
    int arr[1001]={0,};
    scanf("%d",&N);
    for(int a=0;a<N;a++)
    {
        scanf("%d",&arr[a]);
    }
    for(int a=0;a<N-1;a++)
    {
        if(arr[a]<arr[a+1])
        {
            sum+=arr[a+1]-arr[a];
            for (int b = a+1; b < N-1; b++)
            {
                if(arr[b]<arr[b+1])
                {
                    sum+=arr[b+1]-arr[b];
                }
                else
                {
                    goto hi;
                }
            }
        }
        hi:if(max<sum)
        {
            max=sum;
        }
        sum=0;
    }
    printf("%d",max);
    return 0;
}