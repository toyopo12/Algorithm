int main()
{
    int N,i,j,num;
    int count[10001]={0,};
    scanf("%d", &N);

    for(i=0; i<N ;i++)
    {
        scanf("%d", &num);
        count[num] = count[num] + 1;
    }

    for(i=1; i<10001; i++)
    {
        for(j=1; j<=count[i]; j++)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}