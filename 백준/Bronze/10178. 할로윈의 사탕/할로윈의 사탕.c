int main()
{
    int n;
    scanf("%d",&n);
    for(int a=0;a<n;a++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        printf("You get %d piece(s) and your dad gets %d piece(s).\n",a/b,a%b);
    }
    return 0;
}