#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int main()
{
    int n;
    int N[101010];
    int point;
    int p=0;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> N[i];
    }
    cin >> point;
    sort(N,N+n);
    for(int i=0;i<n;i++)
    {
        if(N[i]>=point*2+1)
        {
            goto hi;
        }
        for(int l=i+1;l<n;l++)
        {
            if(N[i]+N[l]==point)
            {
                p++;
                break;
            }
            if(N[i]+N[l]>point)
            {
                break;
            }
        }
    }
    hi:;
    cout << p;
    return 0;
}