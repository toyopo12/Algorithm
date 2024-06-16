#include <iostream>
#include <algorithm>

using namespace std;

typedef struct
{
    int x;
    int y;
}point;

bool compare(point a, point b)
{
    if(a.x==b.x)
    {
        return a.y < b.y;
    }
    else
    {
        return a.x < b.x;
    }
}

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int length[5][5];
        point hi[5];
        for(int i=0;i<4;i++)
        {
            cin >> hi[i].x >> hi[i].y;
        }
        sort(hi,hi+4,compare);
        for(int i=0;i<4;i++)
        {
            for(int j=i+1;j<4;j++)
            {
                length[i][j]=(hi[i].x-hi[j].x)*(hi[i].x-hi[j].x)+(hi[i].y-hi[j].y)*(hi[i].y-hi[j].y);
            }
        }
        if(length[0][1]==length[0][2] && length[1][3]==length[2][3] && length[0][3]==length[1][2])
        {
            cout << "1\n";
        }
        else
        {
            cout << "0\n";
        }
    }
    return 0;
}