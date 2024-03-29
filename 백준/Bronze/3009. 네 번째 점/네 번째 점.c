#include <stdio.h>
#include <string.h>

int main()
{
    int arr1[3],arr2[3];
    for(int A=0;A<3;A++)
    {
        scanf("%d %d",&arr1[A],&arr2[A]);
    }
    if(arr1[0]==arr1[1])
    {
        if (arr2[0] == arr2[1])
            printf("%d %d",arr1[2],arr2[2]);
        else if (arr2[0] == arr2[2])
            printf("%d %d",arr1[2],arr2[1]);
        else if (arr2[1]==arr2[2])
            printf("%d %d",arr1[2],arr2[0]);
    }
    else if(arr1[0]==arr1[2])
    {
        if (arr2[0] == arr2[1])
            printf("%d %d",arr1[1],arr2[2]);
        else if (arr2[0] == arr2[2])
            printf("%d %d",arr1[1],arr2[1]);
        else if (arr2[1]==arr2[2])
            printf("%d %d",arr1[1],arr2[0]);
    }
    else if(arr1[1]==arr1[2])
    {
        if (arr2[0] == arr2[1])
            printf("%d %d",arr1[0],arr2[2]);
        else if (arr2[0] == arr2[2])
            printf("%d %d",arr1[0],arr2[1]);
        else if (arr2[1]==arr2[2])
            printf("%d %d",arr1[0],arr2[0]);
    }
    return 0;
}