#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int main()
{
    char n[10];
    int N[10]={0};
    int max=0;
    cin >> n;
    for(int i=0;i<strlen(n);i++)
    {
        if(n[i]=='9')
        {
            N[6]++;
        }
        else
            N[n[i]-48]++;
    }
    N[6]=(N[6]+1)/2;
    for(int i=0;i<=8;i++)
    {
        if(max<N[i])
        {
            max=N[i];
        }
    }
    cout << max;
    return 0;
}