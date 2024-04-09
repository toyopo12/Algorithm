int pi(int n)
{
    if(n==4)
        return 3;
    else if(n==3)
        return 2;
    else if(n==2)
        return 1;
    else if(n==1)
        return 1;
    else if(n==0)
        return 0;
    return pi(n-1) + pi(n-2);
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",pi(n));
    return 0;
}