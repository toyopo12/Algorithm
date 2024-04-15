int main()
{
    int N;
    int time=0;
    scanf("%d",&N);
    while(1)
    {
        for(int a=1;a<100000;a++)
        {
            if(a>N)
            {
                goto hi;
            }
            N-=a;
            time++;
        }
        hi:if(N==0)
        {
            printf("%d",time);
            return 0;
        }
    }
}