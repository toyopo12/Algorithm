#include <iostream>

using namespace std;

int main()
{
    int n;
    int sum=0;
    int count=0;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        char c;
        cin >> c;
        if(c=='p' && count!=3)
        {
            count=1;
        }
        else if(c=='P' && count==1)
        {
            count++;
        }
        else if(c=='A' && count==2)
        {
            count++;
        }
        else if(c=='p' && count==3)
        {
            sum++;
            count=0;
        }
        else
        {
            count=0;
        }
    }
    cout << sum;
    return 0;
}