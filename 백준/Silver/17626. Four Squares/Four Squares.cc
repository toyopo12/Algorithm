#include <iostream>

using namespace std;

int arr[50050];

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    arr[1]=1;
    for(int i=2;i<=n;i++)
    {
        int mini=5;
        int good=1;
        while(i-good*good>=0)
        {
            if(arr[i-good*good]<mini)
            {
                mini=arr[i-good*good];
            }
            good++;
        }
        arr[i]=mini+1;
    }
    cout << arr[n];
    return 0;
}