#include <iostream>

using namespace std;

int main()
{
    int A,P,C;
    scanf("%d %d %d",&A,&P,&C);
    if(A+C<P)
    {
        printf("%d",P);
    }
    else
    {
        printf("%d",A+C);
    }
    return 0;
}