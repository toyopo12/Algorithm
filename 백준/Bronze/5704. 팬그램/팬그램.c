int main()
{
    char arr[201];
    while(1)
    {
        hi:scanf("%[^\n]s",arr);
        getchar();
        if(arr[0]=='*')
        {
            break;
        }
        int abc[26]={0,};
        for(int a=0;a<strlen(arr);a++)
        {
            abc[arr[a]-97]++;
        }
        for(int b=0;b<26;b++)
        {
            if(abc[b]==0)
            {
                printf("N\n");
                goto hi;
            }
        }
        printf("Y\n");
    }
    return 0;
}