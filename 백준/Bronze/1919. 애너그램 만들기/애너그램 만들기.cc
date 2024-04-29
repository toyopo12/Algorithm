#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int main()
{
    char a[1010],b[1010];
    int A[27]={0};
    int B[27]={0};
    int sum=0;
    cin >> a >> b;
    for(int i=0;i<strlen(a);i++)
    {
        A[a[i]-97]++;
    }
    for(int i=0;i<strlen(b);i++)
    {
        B[b[i]-97]++;
    }
    for(int i=0;i<27;i++)
    {
        if(A[i]<=B[i])
        {
            sum+=B[i]-A[i];
        }
        else
        {
            sum+=A[i]-B[i];
        }
    }
    cout << sum;
    return 0;
}