int main()
{
    int N;
    char arr[31];
    scanf("%d",&N);
    for(int a=0;a<N;a++)
    {
        getchar();
        scanf("%[^\n]s",arr);
        if(arr[0]>90)
        {
            arr[0]-=32;
        }
        printf("%s\n",arr);
    }
    return 0;
}