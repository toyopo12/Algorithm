int main()
{
    int N;
    int max=0;
    int sum=0;
    int temp;
    scanf("%d",&N);
    for(int a=0;a<N;a++)
    {
        int arr[5];
        for(int a=1;a<=4;a++)
        {
            scanf("%d",&arr[a]);
        }
        for(int a=1;a<=4;a++)
        {
            for(int b=1;b<=4;b++)
            {
                if(arr[a]<arr[b])
                {
                    temp=arr[a];
                    arr[a]=arr[b];
                    arr[b]=temp;
                }
            }
        }
        if(arr[1]==arr[2] && arr[2]==arr[3] && arr[3]==arr[4])
        {
            sum=50000+5000*arr[1];
        }
        else if(arr[1]==arr[2] && arr[2]!=arr[3] && arr[3]==arr[4])
        {
            sum=2000+500*(arr[1]+arr[3]);
        }
        else if(arr[1]==arr[2] && arr[2]==arr[3] && arr[3]!=arr[4])
        {
            sum=10000+1000*arr[1];
        }
        else if(arr[1]!=arr[2] && arr[2]==arr[3] && arr[3]==arr[4])
        {
            sum=10000+1000*arr[2];
        }
        else if(arr[1]!=arr[2] && arr[2]!=arr[3] && arr[3]!=arr[4])
        {
            sum=100*arr[4];
        }
        else
        {
            if(arr[1]==arr[2])
            {
                sum=1000+100*arr[1];
            }
            else if(arr[2]==arr[3])
            {
                sum=1000+100*arr[2];
            }
            if(arr[3]==arr[4])
            {
                sum=1000+100*arr[3];
            }
        }
        if(max<sum)
        {
            max=sum;
        }
        sum=0;
    }
    printf("%d",max);
    return 0;
}