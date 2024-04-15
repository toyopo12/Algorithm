int main()
{
    char arr[11];
    int check=0;
    for(int a=1;a<=5;a++)
    {
        scanf("%s",arr);
        for(int b=0;b<strlen(arr);b++)
        {
            if(arr[b]=='F')
            {
                if(arr[b+1]=='B' && arr[b+2]=='I')
                {
                    printf("%d ",a);
                    check++;
                    goto hi;
                }
            }
        }
        hi:;
    }
    if(check==0)
    {
        printf("HE GOT AWAY!");
    }
    return 0;
}