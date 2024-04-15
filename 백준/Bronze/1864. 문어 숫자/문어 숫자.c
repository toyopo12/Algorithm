int main()
{
    char arr[9];
    int sum=0;
    int t=0;
    while(scanf("%s",arr)!='#')
    {
        if(arr[0]=='#')
        {
            break;
        }
        for(int a=0;a<strlen(arr);a++)
        {
            if(arr[a]=='-')
            {
                t+=0;
            }
            else if(arr[a]=='\\')
            {
                t+=1;
            }
            else if(arr[a]=='(')
            {
                t+=2;
            }
            else if(arr[a]=='@')
            {
                t+=3;
            }
            else if(arr[a]=='?')
            {
                t+=4;
            }
            else if(arr[a]=='>')
            {
                t+=5;
            }
            else if(arr[a]=='&')
            {
                t+=6;
            }
            else if(arr[a]=='%')
            {
                t+=7;
            }
            else if(arr[a]=='/')
            {
                t-=1;
            }
            for(int b=a;b<strlen(arr)-1;b++)
            {
                t*=8;
            }
            sum+=t;
            t=0;
        }
        printf("%d\n",sum);
        sum=0;
    }
    return 0;
}