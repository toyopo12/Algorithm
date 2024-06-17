#include <iostream>
#include <map>
#include <vector>

using namespace std;

map<string,int> hi;
int arr[150010]={0};

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long afood=0;
    long long bfood=0;
    int bfoodnum=0;
    int cfoodnum=0;
    bool check = true;
    int a,b,c;
    cin >> a >> b >> c;
    for(int i=1;i<=a+b;i++)
    {
        string x;
        int y;
        cin >> x >> y;
        hi.insert({x,i});
        arr[i]=y;
    }
    for(int i=0;i<c;i++)
    {
        string x;
        cin >> x;
        hi.insert({x,0});
    }
    int N;
    cin >> N;
    for(int i=1;i<=N;i++)
    {
        string x;
        cin >> x;
        if(0<hi[x] && hi[x]<=a)
        {
            afood+=arr[hi[x]];
        }
        else if(a<hi[x] && hi[x]<=a+b)
        {
            bfood+=arr[hi[x]];
            bfoodnum++;
        }
        else
        {
            cfoodnum++;
        }
    }
    if(bfoodnum==0)
    {
        if(cfoodnum!=0 && afood<50000)
        {
            check = false;
        }
    }
    else
    {
        if(cfoodnum==0)
        {
            if(afood<20000)
            {
                check = false;
            }
        }
        else if(cfoodnum==1)
        {
            if(afood<20000)
            {
                check = false;
            }
            if(afood+bfood<50000)
            {
                check = false;
            }
        }
        else
        {
            check = false;
        }
    }
    if(check)
    {
        cout << "Okay";
    }
    else
    {
        cout << "No";
    }
    return 0;
}