int main()
{
    int N;
    char arr[51];
    scanf("%d",&N);
    for(int a=0;a<N;a++)
    {
        getchar();
        scanf("%[^\n]s",arr);
        printf("%d. %s\n",a+1,arr);
    }
    return 0;
}