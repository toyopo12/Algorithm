int main()
{
    int x;
    scanf("%d",&x);
    if(90<=x && 100>=x)
        printf("A");
    else if(80<=x && 89>=x)
        printf("B");
    else if(70<=x && 79>=x)
        printf("C");
    else if(60<=x && 69>=x)
        printf("D");
    else
        printf("F");
    return 0;
}