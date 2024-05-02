int main()
{
    int n;
    scanf("%d",&n);
    for(int a=0;a<n;a++)
    {
        int sum=0;
        int wrong=0;
        char arr[301];
        scanf("%s",arr);
        for(int b=0;b<strlen(arr);b++)
        {
            if(arr[b]=='\\')
            {
                if(arr[b+1]=='\'')
                {
                    b++;
                    wrong++;
                }
                else
                {
                    b+=2;
                    wrong++;
                }
            }
            else if(97<=arr[b] && arr[b]<=122)
            {
                sum++;
            }
            else
            {
                wrong++;
            }
        }
        sum+=wrong;
        if(wrong>=(sum+1)/2)
        {
            printf("I don't understand");
        }
        else
        {
            for(int b=0;b<strlen(arr);b++)
            {
                if(arr[b]=='@')
                {
                    printf("a");
                }
                else if(arr[b]=='[')
                {
                    printf("c");
                }
                else if(arr[b]=='!')
                {
                    printf("i");
                }
                else if(arr[b]==';')
                {
                    printf("j");
                }
                else if(arr[b]=='^')
                {
                    printf("n");
                }
                else if(arr[b]=='0')
                {
                    printf("o");
                }
                else if(arr[b]=='7')
                {
                    printf("t");
                }
                else if(arr[b]=='\\')
                {
                    if(arr[b+1]=='\'')
                    {
                        b++;
                        printf("v");
                    }
                    else
                    {
                        b+=2;
                        printf("w");
                    }
                }
                else
                {
                    printf("%c",arr[b]);
                }
            }
        }
        printf("\n");
    }
    return 0;
}