#include <iostream>
#include <string>

using namespace std;

int main()
{
    int M,N;
    int count[6]={0};
    char arr[505][505];
    cin >> M >> N;
    for(int i=1;i<=5*M+1;i++)
    {
        for(int j=1;j<=5*N+1;j++)
        {
            cin >> arr[j][i];
        }
    }
    for(int i=1;i<=M;i++)
    {
        for(int j=1;j<=N;j++)
        {
            int window=0;
            for(int k=5*i;k>=5*i-3;k--)
            {
                if(arr[5*j-3][k]=='*')
                {
                    window++;
                }
            }
            if(window==0)
            {
                count[0]++;
            }
            else if(window==1)
            {
                count[1]++;
            }
            else if(window==2)
            {
                count[2]++;
            }
            else if(window==3)
            {
                count[3]++;
            }
            else if(window==4)
            {
                count[4]++;
            }
        }
    }
    for(int i=0;i<5;i++)
    {
        cout << count[i] << " ";
    }
    return 0;
}