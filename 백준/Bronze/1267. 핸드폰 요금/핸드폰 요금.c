int main()
{
    int n;
    scanf("%d",&n);
    int sumY=0,sumM=0;
    for(int a=0;a<n;a++)
    {
        int money;
        scanf("%d",&money);
        sumY+=(money/30+1)*10;
        sumM+=(money/60+1)*15;
    }
    if(sumY>sumM)
    {
        printf("M %d",sumM);
    }
    else if(sumM>sumY)
    {
        printf("Y %d",sumY);
    }
    else if(sumM==sumY)
    {
        printf("Y M %d",sumM);
    }
    return 0;
}