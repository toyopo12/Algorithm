int main()
{
    int arr[4]={0,};
    int temp;
    char abc[4];
    for(int a=0;a<3;a++)
    {
        scanf("%d",&arr[a]);
    }
    scanf("%s",abc);
    getchar();
    for(int a=0;a<3;a++)
    {
        for(int b=0;b<3;b++)
        {
            if(arr[a]<arr[b])
            {
                temp=arr[a];
                arr[a]=arr[b];
                arr[b]=temp;
            }
        }
    }
    for(int a=0;a<3;a++)
    {
        if(abc[a]=='A')
        {
            printf("%d ",arr[0]);
        }
        else if(abc[a]=='B')
        {
            printf("%d ",arr[1]);
        }
        else if(abc[a]=='C')
        {
            printf("%d ",arr[2]);
        }
    }
    return 0;
}