#include <iostream>

using namespace std;

int main()
{
    int N;
    scanf("%d",&N);
    if(N==0)
    {
        printf("8");
    }
    else
    {
        int two=1;
        int sum=0;
        while(two<=N)
        {
            two*=2;
            sum++;
        }
        printf("%d",9+sum);
    }
    return 0;
}