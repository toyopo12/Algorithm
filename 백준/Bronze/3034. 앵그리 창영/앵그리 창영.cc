#include <iostream>

using namespace std;

int arr[55];

int main()
{
    int n,a,b;
    int good;
    cin >> n >> a >> b;
    good=a*a+b*b;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]*arr[i]<=good)
        {
            cout << "DA";
        }
        else
        {
            cout << "NE";
        }
        cout << '\n';
    }
    return 0;
}