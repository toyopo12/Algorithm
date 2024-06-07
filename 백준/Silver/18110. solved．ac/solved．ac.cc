#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double n;
    int arr[300030];
    int sum=0;
    cin >> n;
    if(n==0)
    {
        cout << "0";
    }
    else
    {
        int N=floor(n*3/20+0.5);
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        sort(arr,arr+(int)n);
        for(int i=N;i<(int)n-N;i++)
        {
            sum+=arr[i];
        }
        double a=floor((double)sum/((int)n-2*N)+0.5);
        cout << (int)a;
    }
    return 0;
}