int main()
{
    int arr[9];
    int sum=0;
    int x,y;
    for(int a=0;a<9;a++)
    {
        scanf("%d",&arr[a]);
        sum+=arr[a];
    }
    for(int a=0;a<9;a++)
    {
        for(int b=a+1;b<9;b++)
        {
            if(sum-arr[a]-arr[b]==100)
            {
                x=a;
                y=b;
            }
        }
    }
    for(int a=0;a<9;a++)
    {
        if(a!=x && a!=y)
        {
            printf("%d\n",arr[a]);
        }
    }
    return 0;
}