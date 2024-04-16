int main()
{
    int N;
    int temp;
    scanf("%d",&N);
    for(int A=1;A<=N;A++)
    {
        printf("Scenario #%d:\n",A);
        int arr[3];
        for(int a=0;a<3;a++)
        {
            scanf("%d",&arr[a]);
        }
        for(int b=0;b<3;b++)
        {
            for(int c=0;c<3;c++)
            {
                if(arr[b]<arr[c])
                {
                    temp=arr[b];
                    arr[b]=arr[c];
                    arr[c]=temp;
                }
            }
        }
        if(arr[2]*arr[2]==arr[1]*arr[1]+arr[0]*arr[0])
        {
            printf("yes");
        }
        else
        {
            printf("no");
        }
        printf("\n\n");
    }
    return 0;
}