int main()
{
    int x,y,z,i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        x=t-i;
        for(y=1;y<=x;y++)
        {
            printf(" ");
        }
        for(z=1;z<=i;z++) {
            printf("*");

        }
        printf("\n");
    }
    return 0;
}