int main()
{
    int N;
    int temp;
    scanf("%d",&N);
    for(int A=1;A<=N;A++)
    {
        int arr[5];
        for(int a=0;a<5;a++)
        {
            scanf("%d",&arr[a]);
        }
        for(int b=0;b<5;b++)
        {
            for(int c=0;c<5;c++)
            {
                if(arr[b]<arr[c])
                {
                    temp=arr[b];
                    arr[b]=arr[c];
                    arr[c]=temp;
                }
            }
        }
        if(arr[3]-arr[1]>=4)
        {
            printf("KIN");
        }
        else
        {
            printf("%d",arr[1]+arr[2]+arr[3]);
        }
        printf("\n");
    }
    return 0;
}