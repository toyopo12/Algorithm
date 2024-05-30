#include <iostream>

using namespace std;

typedef struct
{
    int what;
    int where;
    int so;
}point;

point hi[1000100];

bool cmp(point a,point b)
{
    return a.what < b.what;
}

bool cmpp(point a,point b)
{
    return a.where < b.where;
}

int main()
{
    int N;
    cin >> N;
    int now=0;
    for(int i=0;i<N;i++)
    {
        cin >> hi[i].what;
        hi[i].where=i;
    }
    sort(hi,hi+N,cmp);
    hi[0].so=0;
    for(int i=1;i<N;i++)
    {
        if(hi[i].what!=hi[i-1].what)
        {
            now++;
        }
        hi[i].so=now;
    }
    sort(hi,hi+N,cmpp);
    for(int i=0;i<N;i++)
    {
        cout << hi[i].so << " ";
    }
}