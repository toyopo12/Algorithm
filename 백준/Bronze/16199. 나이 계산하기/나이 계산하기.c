int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    if(b>B)
    {
        printf("%d",A-a-1);
    }
    else if(b==B)
    {
        if(c>C)
        {
            printf("%d",A-a-1);
        }
        else
        {
            printf("%d",A-a);
        }
    }
    else if(b<B)
    {
        printf("%d",A-a);
    }
    printf("\n%d\n%d",A-a+1,A-a);
    return 0;
}