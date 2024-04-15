int main()
{
    char arr[260];
    int sum=0;
    while(scanf("%[^\n]s",arr)!='#')
    {
        getchar();
        int good;
        if(arr[0]=='#')
        {
            return 0;
        }
        good=arr[0];
        for(int a=1;a<strlen(arr);a++)
        {
            if(good==arr[a])
            {
                sum++;
            }
            else if(good==arr[a]+32)
            {
                sum++;
            }
        }
        printf("%c %d\n",good,sum);
        sum=0;
    }
    return 0;
}