int main()
{
    int a,b,c;
    long long sum=1;
    long long d=1;
    int arr[10]={0,};
    scanf("%d %d %d",&a,&b,&c);
    sum*=a;
    sum*=b;
    sum*=c;
    while(1)
    {
        long long x;
        if(sum/d==0)
        {
            break;
        }
        x=(sum/d)%10;
        arr[x]++;
        d*=10;
    }
    for(int a=0;a<=9;a++)
    {
        printf("%d\n",arr[a]);
    }
    return 0;
}