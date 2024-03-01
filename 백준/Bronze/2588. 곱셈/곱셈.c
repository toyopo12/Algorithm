int main()
{
    int x,y,a,b,c;
    scanf("%d\n%d",&x,&y);
    a=y/100;
    b=(y-a*100)/10;
    c=y%10;
    printf("%d\n",x*c);
    printf("%d\n",x*b);
    printf("%d\n",x*a);
    printf("%d",x*y);
}