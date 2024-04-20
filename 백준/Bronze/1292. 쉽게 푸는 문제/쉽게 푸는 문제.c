#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int arr[1100];
    int A,B;
    int d=1;
    int e=1;
    int sum=0;
    scanf("%d %d",&A,&B);
    while(e<1001)
    {
        for(int a=0;a<d;a++)
        {
            arr[e]=d;
            e++;
        }
        d++;
    }
    for(int a=A;a<=B;a++)
    {
        sum+=arr[a];
    }
    printf("%d",sum);
    return 0;
}