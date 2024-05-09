#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int main()
{
    int n;
    int arr[100100];
    int brr[100100];
    int max=1;
    scanf("%d",&n);
    for(int a=0;a<n;a++)
    {
        scanf("%d",&arr[a]);
    }
    for(int a=0;a<n-1;a++)
    {
        brr[a]=arr[a+1]-arr[a];
    }
    sort(brr,brr+n-1);
    for(int a=2;a<=brr[0];a++)
    {
        for(int b=0;b<n-1;b++)
        {
            if(brr[b]%a!=0)
            {
                goto hi;
            }
        }
        max=a;
        hi:;
    }
    printf("%d",(arr[n-1]-arr[0])/max-n+1);
    return 0;
}