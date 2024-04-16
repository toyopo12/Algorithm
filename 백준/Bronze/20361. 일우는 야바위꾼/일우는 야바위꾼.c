int main()
{
    int N,X,K;
    int arr[200002]={0,};
    int temp;
    scanf("%d %d %d",&N,&X,&K);
    arr[X]=1;
    for(int A=0;A<K;A++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        temp=arr[a];
        arr[a]=arr[b];
        arr[b]=temp;
    }
    for(int A=1;A<=N;A++)
    {
        if(arr[A]==1)
        {
            printf("%d",A);
            break;
        }
    }
    return 0;
}