int main()
{
    int x;
    scanf("%d",&x);
    if(x==1 || x==3) {
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