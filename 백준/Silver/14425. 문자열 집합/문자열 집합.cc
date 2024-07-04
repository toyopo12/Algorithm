#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    map<string,int> amap;
    map<string,int> bmap;
    int sum=0;
    int a,b;
    cin >> a >> b;
    for(int i=0;i<a;i++)
    {
        string x;
        cin >> x;
        amap[x]++;
    }
    for(int i=0;i<b;i++)
    {
        string x;
        cin >> x;
        bmap[x]++;
    }
    for(pair<string,int>i:amap)
    {
        if(bmap[i.first]>0)
        {
            sum+=bmap[i.first];
        }
    }
    cout << sum;
    return 0;
}