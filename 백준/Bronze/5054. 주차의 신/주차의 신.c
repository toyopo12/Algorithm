int main()
{
    int N;
    int temp;
    int arr[21];
    scanf("%d",&N);
    for(int a=0;a<N;a++)
    {
        int n;
        scanf("%d",&n);
        for(int b=0;b<n;b++)
        {
            scanf("%d",&arr[b]);
        }
        for(int c=0;c<n;c++)
        {
            for(int d=0;d<n;d++)
            {
                if(arr[c]<arr[d])
                {
                    temp=arr[c];
                    arr[c]=arr[d];
                    arr[d]=temp;
                }
            }
        }
        printf("%d\n",(arr[n-1]-arr[0])*2);
    }
    return 0;
}