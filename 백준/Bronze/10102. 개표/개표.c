int main()
{
    int n;
    char arr[15];
    int A=0;
    int B=0;
    scanf("%d %s",&n,arr);
    for(int a=0;a<strlen(arr);a++)
    {
        if(arr[a]=='A')
        {
            A++;
        }
        else if(arr[a]=='B')
        {
            B++;
        }
    }
    if(A<B)
    {
        printf("B");
    }
    else if(A>B)
    {
        printf("A");
    }
    else if(A==B)
    {
        printf("Tie");
    }
    return 0;
}