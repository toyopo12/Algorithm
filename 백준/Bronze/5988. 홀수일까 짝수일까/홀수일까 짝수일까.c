int main()
{
    int N;
    scanf("%d",&N);
    for(int a=0;a<N;a++)
    {
        char arr[61];
        scanf("%s",arr);
        if((arr[strlen(arr)-1]-48)%2==0)
        {
            printf("even");
        }
        else
        {
            printf("odd");
        }
        printf("\n");
    }
    return 0;
}