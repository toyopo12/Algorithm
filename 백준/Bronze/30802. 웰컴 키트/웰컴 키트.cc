#include <iostream>

using namespace std;

int main()
{
    int N;
    int T,P;
    int arr[7];
    int sum=0;
    cin >> N;
    for(int i=0;i<6;i++)
    {
        cin >> arr[i];
    }
    cin >> T >> P;
    for(int i=0;i<6;i++)
    {
        if(arr[i]%T==0)
        {
            sum+=arr[i]/T;
        }
        else
        {
            sum+=arr[i]/T+1;
        }
    }
    cout << sum << "\n" << N/P << " " << N%P;
    return 0;
}