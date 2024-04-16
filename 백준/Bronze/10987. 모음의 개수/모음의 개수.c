int main()
{
    char arr[101];
    int sum=0;
    scanf("%s",arr);
    for(int a=0;a<strlen(arr);a++)
    {
        if(arr[a]=='a' || arr[a]=='e' || arr[a]=='i' || arr[a]=='o' || arr[a]=='u')
        {
            sum++;
        }
    }
    printf("%d",sum);
    return 0;
}