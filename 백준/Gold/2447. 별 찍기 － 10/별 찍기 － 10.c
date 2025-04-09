hi(x,y,n){(x/n%3==1&&y/n%3==1)?printf(" "):n/3?hi(x,y,n/3):printf("*");}
main(){int n,i,j;scanf("%d",&n);for(i=0;i<n;i++,puts(""))for(j=0;j<n;j++)hi(i,j,n);}