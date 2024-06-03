#include <iostream>

using namespace std;

int main()
{
    int arr[101]={0};
    int sum=0;
    int min=0;
    for(int i=1;i<101;i++)
    {
        arr[i]=i*i;
    }
    int M,N;
    cin >> M >> N;
    for(int i=100;i>0;i--)
    {
        if(N>=arr[i] && M<=arr[i])
        {
            sum+=arr[i];
            min=arr[i];
        }
    }
    if(sum==0)
    {
        cout << "-1";
    }
    else
    {
        cout << sum << "\n" << min;
    }
    return 0;
}