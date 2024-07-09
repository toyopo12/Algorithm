#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long sum=0;
    int dsum=0;
    int n;
    int s,g,p,d;
    cin >> n >> s >> g >> p >> d;
    string x;
    cin >> x;
    for(int i=0;i<n;i++)
    {
        if(x[i]=='B')
        {
            dsum=s-1-dsum;
            sum+=dsum;
        }
        else if(x[i]=='S')
        {
            dsum=g-1-dsum;
            sum+=dsum;
        }
        else if(x[i]=='G')
        {
            dsum=p-1-dsum;
            sum+=dsum;
        }
        else if(x[i]=='P')
        {
            dsum=d-1-dsum;
            sum+=dsum;
        }
        else if(x[i]=='D')
        {
            sum+=d;
        }
    }
    cout << sum;
    return 0;
}