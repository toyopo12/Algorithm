int main()
{
    int M;
    int arr[4]={0,};
    int temp;
    arr[1]=1;
    scanf("%d",&M);
    for(int a=0;a<M;a++)
    {
        int X,Y;
        scanf("%d %d",&X,&Y);
        {
            temp=arr[X];
            arr[X]=arr[Y];
            arr[Y]=temp;
        }
    }
    for(int a=1;a<=3;a++)
    {
        if(arr[a]==1)
            printf("%d",a);
    }
    return 0;
}