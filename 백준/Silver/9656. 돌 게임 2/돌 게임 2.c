int main()
{
    int a,x;
    scanf("%d",&a);
    x=a+1;
    if(x==3) {
        printf("SK");
        return 0;
    }
    if(x==2) {
        printf("CY");
        return 0;
    }
    if((x-3)%2==0)
        printf("SK");
    if((x-3)%2==1)
        printf("CY");
    return 0;
}