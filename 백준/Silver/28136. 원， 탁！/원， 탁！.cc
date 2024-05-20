#include <iostream>

using namespace std;

int arr[1000100];

int main()
{
    int N;
    scanf("%d",&N);
    int sum=0;
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<N-1;i++)
    {
        if(arr[i]>=arr[i+1])
        {
            sum++;
        }
    }
    if(arr[N-1]>=arr[0])
    {
        sum++;
    }
    printf("%d",sum);
    return 0;
}