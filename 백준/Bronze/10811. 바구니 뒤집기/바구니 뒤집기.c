int main()
{
    int N,M,i,j,a;
    int arr[101];
    scanf("%d %d",&N,&M);
    for(int x=1;x<=N;x++)
    {
        arr[x]=x;
    }
    for(int y=0;y<M;y++)
    {
        scanf("%d %d",&i,&j);
        for(int X=i;X<=j;X++)
        {
            if(2*X>=j+i)
                break;
            a = arr[X];
            arr[X] = arr[j+i-X];
            arr[j+i-X] = a;
        }
    }
    for(int z=1;z<=N;z++)
    {
        printf("%d ",arr[z]);
    }
    return 0;
}