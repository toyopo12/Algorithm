#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string hi[20020];

bool compare(string a,string b)
{
    if(a.length()==b.length())
    {
        return a < b;
    }
    else
    {
        return a.length() < b.length();
    }
}

int main()
{
    int N;
    cin >> N;
    for(int i=0;i<N;i++)
    {
        cin >> hi[i];
    }
    sort(hi,hi+N,compare);
    for(int i=0;i<N;i++)
    {
        if(hi[i]==hi[i-1])
        {
            continue;
        }
        cout << hi[i] << endl;
    }
    return 0;
}