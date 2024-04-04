#include <stdio.h>
#include <string.h>

int main()
{
    int sum=0;
    int min=100;
    int arr[7];
    for(int A=0;A<7;A++)
    {
        scanf("%d",&arr[A]);
        if(arr[A]%2==1) {
            sum += arr[A];
            if(arr[A]<min)
                min=arr[A];
        }
    }
    if(min==100)
        printf("-1");
    else
        printf("%d\n%d",sum,min);
    return 0;
}