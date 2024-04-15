int main()
{
    char arr[101];
    scanf("%s",arr);
    for(int a=0;a<strlen(arr);a++)
    {
        if(arr[a]<90)
        {
            printf("%c",arr[a]+32);
        }
        else
        {
            printf("%c",arr[a]-32);
        }
    }
    return 0;
}