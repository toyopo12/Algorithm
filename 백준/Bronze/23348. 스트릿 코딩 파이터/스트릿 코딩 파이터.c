int main()
{
    int a,b,c;
    int max=0;
    int suma=0;
    int sumb=0;
    int sumc=0;
    scanf("%d %d %d",&a,&b,&c);
    int N;
    scanf("%d",&N);
    for(int A=0;A<N;A++)
    {
        for(int B=0;B<3;B++)
        {
            int x,y,z;
            scanf("%d %d %d",&x,&y,&z);
            suma+=x;
            sumb+=y;
            sumc+=z;
        }
        if(a*suma+b*sumb+c*sumc>max)
        {
            max=a*suma+b*sumb+c*sumc;
        }
        suma=0;
        sumb=0;
        sumc=0;
    }
    printf("%d",max);
    return 0;
}