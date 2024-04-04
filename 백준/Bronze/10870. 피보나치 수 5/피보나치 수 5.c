int main()
{
    int arr[21]={0,};
    int n;
    arr[0]=0;
    arr[1]=1;
    scanf("%d",&n);
    while(1)
    {
        if(n==0)
        {
            printf("0");
            return 0;
        }
        else if(n==1)
        {
            printf("1");
            return 0;
        }
        for (int a = 2; a < 21; a++)
        {
            arr[a] = arr[a - 1] + arr[a - 2];
            if (a == n)
            {
                printf("%d", arr[a]);
                return 0;
            }
        }
    }
}