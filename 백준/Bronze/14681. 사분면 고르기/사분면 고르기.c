int main()
{
    int x;
    int y;
    scanf("%d\n%d",&x,&y);
    if (x>0 && y>0)
        printf("1");
    else if (x>0 && y<0)
        printf("4");
    else if (x<0 && y<0)
        printf("3");
    else
        printf("2");
    return 0;
}