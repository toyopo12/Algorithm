int main()
{
    while(1)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        if(a==0 && b==0)
        {
            break;
        }
        if(a<=b)
        {
            printf("No");
        }
        else
        {
            printf("Yes");
        }
        printf("\n");
    }
    return 0;
}