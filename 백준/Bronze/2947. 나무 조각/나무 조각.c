int main()
{
    int arr[5]={0,};
    int temp;
    for(int a=0;a<5;a++)
    {
        scanf("%d",&arr[a]);
    }
    while(1)
    {
        for (int a = 0; a < 4; a++)
        {
            if (arr[a] > arr[a + 1])
            {
                temp = arr[a];
                arr[a] = arr[a + 1];
                arr[a + 1] = temp;
                for(int a=0;a<5;a++)
                {
                    printf("%d ",arr[a]);
                }
                printf("\n");
            }
        }
        if(arr[0]==1 && arr[1]==2 && arr[2]==3 && arr[3]==4 && arr[4]==5)
        {
            break;
        }
    }
    return 0;
}