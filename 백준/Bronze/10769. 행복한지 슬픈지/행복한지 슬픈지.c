int main()
{
    int happy=0;
    int sad=0;
    char arr[256];
    scanf("%[^\n]s",arr);
    for(int a=0;a<strlen(arr)-2;a++)
    {
        if(arr[a]==':')
        {
            if(arr[a+1]=='-' && arr[a+2]==')')
            {
                happy++;
            }
            else if(arr[a+1]=='-' && arr[a+2]=='(')
            {
                sad++;
            }
        }
    }
    if(happy==0 && sad==0)
    {
        printf("none");
    }
    else if(happy==sad)
    {
        printf("unsure");
    }
    else if(happy>sad)
    {
        printf("happy");
    }
    else if(happy<sad)
    {
        printf("sad");
    }
    return 0;
}