int main() {
    int N,M;
    int max=0;
    scanf("%d %d",&N,&M);
    int arr[101];
    for(int a=0;a<N;a++)
    {
        scanf("%d",&arr[a]);
    }
    for(int a=0;a<N-2;a++)
    {
        for(int b=a+1;b<N-1;b++)
        {
            for(int c=b+1;c<N;c++)
            {
                if(max<arr[a]+arr[b]+arr[c] && arr[a]+arr[b]+arr[c]<=M)
                {
                    max=arr[a]+arr[b]+arr[c];
                }
            }
        }
    }
    printf("%d",max);
    return 0;
}