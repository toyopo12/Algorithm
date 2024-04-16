int main()
{
    int N,K,L;
    int i=0;
    int arr[1500010]={0,};
    scanf("%d %d %d",&N,&K,&L);
    for(int A=0;A<N;A++)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if(a+b+c>=K)
        {
            if(a>=L && b>=L && c>=L)
            {
                arr[3*i]=a;
                arr[3*i+1]=b;
                arr[3*i+2]=c;
                i++;
            }
        }
    }
    printf("%d\n",i);
    for(int a=0;a<3*i;a++)
    {
        printf("%d ",arr[a]);
    }
    return 0;
}