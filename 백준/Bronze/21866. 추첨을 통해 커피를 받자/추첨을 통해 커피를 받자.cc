#include <iostream>

using namespace std;

int main()
{
    int sum=0;
    int point[10];
    for(int i=0;i<9;i++)
    {
        cin >> point[i];
    }
    for(int i=0;i<9;i++)
    {
        if((100+i*50)/100*100<point[i])
        {
            cout << "hacker";
            return 0;
        }
        else
        {
            sum+=point[i];
        }
    }
    if(sum>=100)
    {
        cout << "draw";
    }
    else
    {
        cout << "none";
    }
    return 0;
}