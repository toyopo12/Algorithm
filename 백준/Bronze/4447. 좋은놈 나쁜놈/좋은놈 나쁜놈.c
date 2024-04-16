int main()
{
    int N;
    char arr[26];
    scanf("%d",&N);
    for(int a=0;a<N;a++)
    {
        int good=0;
        int bad=0;
        getchar();
        scanf("%[^\n]s",arr);
        for(int b=0;b<strlen(arr);b++)
        {
            if(arr[b]=='G'||arr[b]=='g')
            {
                good++;
            }
            else if(arr[b]=='B'||arr[b]=='b')
            {
                bad++;
            }
        }
        if(bad<good)
        {
            printf("%s is GOOD",arr);
        }
        else if(bad==good)
        {
            printf("%s is NEUTRAL",arr);
        }
        else
        {
            printf("%s is A BADDY",arr);
        }
        printf("\n");
    }
    return 0;
}