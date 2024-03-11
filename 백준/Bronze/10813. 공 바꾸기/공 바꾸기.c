int main()
{
    int x,y,z,N,M;
    int arr[N];
    scanf("%d %d",&N,&M);
    for(int i=1;i<=N;i++)
    {
        arr[i]=i;
    }
    for(int l=1;l<=M;l++)
    {
        scanf("%d %d",&x,&y);
        z=arr[x];
        arr[x]=arr[y];
        arr[y]=z;
    }
    for(z=1;z<=N;z++)
    {
        printf("%d ",arr[z]);
    }
    return 0;
}