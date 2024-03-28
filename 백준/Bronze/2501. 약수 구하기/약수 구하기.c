#include <stdio.h>
#include <string.h>

int main() {
    int a,b;
    int i=0;
    scanf("%d %d",&a,&b);
    int arr[a];
    for(int A=1;A<=a;A++)
    {
        if(a%A==0)
        {
            i++;
            arr[i]=A;
        }
    }
    if(i<b)
        printf("0");
    else
        printf("%d",arr[b]);
    return 0;
}