int main()
{
    int N;
    int A=0,B=0,G=0;
    char arr[101];
    scanf("%d %s",&N,arr);
    for(int a=0;a<N;a++)
    {
        if(a%4==0)
        {
            if(arr[a]=='B')
            {
                B++;
            }
        }
        else if(a%4==1)
        {
            if(arr[a]=='A')
            {
                B++;
            }
        }
        else if(a%4==2)
        {
            if(arr[a]=='B')
            {
                B++;
            }
        }
        else if(a%4==3)
        {
            if(arr[a]=='C')
            {
                B++;
            }
        }
        if(a%3==0)
        {
            if(arr[a]=='A')
            {
                A++;
            }
        }
        else if(a%3==1)
        {
            if(arr[a]=='B')
            {
                A++;
            }
        }
        else if(a%3==2)
        {
            if(arr[a]=='C')
            {
                A++;
            }
        }
        if((a/2)%3==0)
        {
            if(arr[a]=='C')
            {
                G++;
            }
        }
        else if((a/2)%3==1)
        {
            if(arr[a]=='A')
            {
                G++;
            }
        }
        if((a/2)%3==2)
        {
            if(arr[a]=='B')
            {
                G++;
            }
        }
    }
    if(A==B && B==G)
    {
        printf("%d\nAdrian\nBruno\nGoran",A);
    }
    else if(A==B && B<G)
    {
        printf("%d\nGoran",G);
    }
    else if(A==G && G<B)
    {
        printf("%d\nBruno",B);
    }
    else if(B==G && G<A)
    {
        printf("%d\nAdrian",A);
    }
    else if(A<B && B<G)
    {
        printf("%d\nGoran",G);
    }
    else if(A<G && G<B)
    {
        printf("%d\nBruno",B);
    }
    else if(B<G && G<A)
    {
        printf("%d\nAdrian",A);
    }
    else if(B<A && A<G)
    {
        printf("%d\nGoran",G);
    }
    else if(G<A && A<B)
    {
        printf("%d\nBruno",B);
    }
    else if(G<B && B<A)
    {
        printf("%d\nAdrian",A);
    }
    else if(A<B && B==G)
    {
        printf("%d\nBruno\nGoran",G);
    }
    else if(B<A && A==G)
    {
        printf("%d\nAdrian\nGoran",A);
    }
    else if(G<B && B==A)
    {
        printf("%d\nAdrian\nBruno",A);
    }
    return 0;
}