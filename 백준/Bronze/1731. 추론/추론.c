int main()
{
    int N;
    int arr[51];
    scanf("%d",&N);
    for(int a=1;a<=N;a++)
    {
        scanf("%d",&arr[a]);
    }
    if(arr[1]+arr[3]==2*arr[2])
    {
        printf("%d",arr[N]+arr[2]-arr[1]);
    }
    else
    {
        printf("%d",arr[N]*(arr[2]/arr[1]));
    }
    return 0;
}