int main()
{
    int d=1;
    int i=0;
    int arr[12];
    int x;
    int temp;
    scanf("%d",&x);
    while(1)
    {
        arr[i]=(x/d)%10;
        if(x/d==0)
        {
            break;
        }
        d*=10;
        i++;
    }
    for(int a=0;a<i;a++)
    {
        for(int b=0;b<i;b++)
        {
            if(arr[a]>arr[b])
            {
                temp=arr[a];
                arr[a]=arr[b];
                arr[b]=temp;
            }
        }
    }
    for(int a=0;a<i;a++)
    {
        printf("%d",arr[a]);
    }
    return 0;
}