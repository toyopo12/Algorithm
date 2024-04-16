int main()
{
    int arr[101]={0,};
    int brr[101]={0,};
    int N;
    scanf("%d",&N);
    for(int a=0;a<N;a++)
    {
        scanf("%d",&brr[a]);
        arr[a]=brr[a]*(a+1);
        for(int b=0;b<=a-1;b++)
        {
            arr[a]-=arr[b];
        }
        printf("%d ",arr[a]);
    }
    return 0;
}