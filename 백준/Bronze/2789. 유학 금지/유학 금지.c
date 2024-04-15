int main()
{
    char arr[101];
    scanf("%s",arr);
    for(int a=0;a<strlen(arr);a++)
    {
        if(arr[a]!='C' && arr[a]!='A' && arr[a]!='M' && arr[a]!='B' && arr[a]!='R' && arr[a]!='I' && arr[a]!='D' && arr[a]!='G' && arr[a]!='E')
        {
            printf("%c",arr[a]);
        }
    }
    return 0;
}