#include <stdio.h>
#include <string.h>

int main(void)
{
    float x;
    float b=0;
    char arr[50];
    char brr[2];
    int c=0;
    int a=0;
    while(a<20)
        {
            scanf("%s %f %s",arr,&x,brr);
            if(brr[1]=='+')
            {
                if(brr[0]=='A')
                    b+=4.5*x;
                else if(brr[0]=='B')
                    b+=3.5*x;
                else if(brr[0]=='C')
                    b+=2.5*x;
                else if(brr[0]=='D')
                    b+=1.5*x;
            }
            else if(brr[1]=='0')
            {
                if(brr[0]=='A')
                    b+=4*x;
                else if(brr[0]=='B')
                    b+=3*x;
                else if(brr[0]=='C')
                    b+=2*x;
                else if(brr[0]=='D')
                    b+=1*x;
            }
            else if(brr[0]=='F')
                b+=0;
            else if(brr[0]=='P')
                c-=x;
            c+=x;
            a++;
        }
    printf("%f",b/c);
    return 0;
}