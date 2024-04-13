int main()
{
    int N;
    int i=1;
    scanf("%d",&N);
    int movie[10010]={0,};
    for(int a=666;a<6670000;a++)
    {
        if(a%10==6)
        {
            if(a%100==66)
            {
                if(a%1000==666)
                {
                    movie[i]=a;
                    i++;
                    goto hi;
                }
            }
        }
        if((a%100)/10==6)
        {
            if((a%1000)/10==66)
            {
                if((a%10000)/10==666)
                {
                    movie[i]=a;
                    i++;
                    goto hi;
                }
            }
        }
        if((a%1000)/100==6)
        {
            if((a%10000)/100==66)
            {
                if((a%100000)/100==666)
                {
                    movie[i]=a;
                    i++;
                    goto hi;
                }
            }
        }
        if((a%10000)/1000==6)
        {
            if((a%100000)/1000==66)
            {
                if((a%1000000)/1000==666)
                {
                    movie[i]=a;
                    i++;
                    goto hi;
                }
            }
        }
        if((a%100000)/10000==6)
        {
            if((a%1000000)/10000==66)
            {
                if((a%10000000)/10000==666)
                {
                    movie[i]=a;
                    i++;
                    goto hi;
                }
            }
        }
        hi:if(i==N+1)
            break;
    }
    printf("%d",movie[N]);
    return 0;
}