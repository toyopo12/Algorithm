int main()
{
    char arr[101];
    int d=0;
    scanf("%s",arr);
    int A=strlen(arr)/10;
    int B=strlen(arr)%10;
    for(int a=0;a<A;a++)
    {
        for(int b=0;b<10;b++)
        {
            printf("%c",arr[d]);
            d++;
        }
        printf("\n");
    }
    for(int a=0;a<B;a++)
    {
        printf("%c",arr[d]);
        d++;
    }
    return 0;
}