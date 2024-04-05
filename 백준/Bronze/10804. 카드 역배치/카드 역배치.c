int main()
{
    int arr[22];
    int temp;
    for(int a=1;a<=20;a++)
    {
        arr[a]=a;
    }
    for(int a=0;a<10;a++)
    {
        int A,B;
        scanf("%d %d",&A,&B);
        for(int b=A;b<=A+(B-A)/2;b++)
        {
            temp=arr[b];
            arr[b]=arr[B+A-b];
            arr[B+A-b]=temp;
        }
    }
    for(int a=1;a<=20;a++)
    {
        printf("%d ",arr[a]);
    }
    return 0;
}