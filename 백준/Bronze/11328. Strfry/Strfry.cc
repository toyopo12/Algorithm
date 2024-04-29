#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        char a[1010],b[1010];
        cin >> a >> b;
        if(strlen(a)!=strlen(b))
        {
            cout << "Impossible\n"; 
            goto hi;
        }
        sort(a,a+strlen(a));
        sort(b,b+strlen(b));
        for(int l=0;l<strlen(a);l++)
        {
            if(a[l]!=b[l])
            {
                cout << "Impossible\n"; 
                goto hi;
            }
        }
        cout << "Possible\n";
        hi:;
    }
    return 0;
}