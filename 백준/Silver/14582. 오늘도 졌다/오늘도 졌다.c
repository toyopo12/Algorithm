int main()
{
    int arr[9];
    int brr[9];
    int suma=0;
    int sumb=0;
    int a=0;
    int b=0;
    for(int a=0;a<9;a++)
    {
        scanf("%d",&arr[a]);
        a+=arr[a];
    }
    for(int a=0;a<9;a++)
    {
        scanf("%d",&brr[a]);
        b+=brr[a];
    }
    for(int a=0;a<9;a++)
    {
        suma+=arr[a];
        if(suma>sumb)
        {
            if(a<b)
            {
                printf("Yes");
                return 0;
            }
        }
        sumb+=brr[a];
    }
    printf("No");
    return 0;
}