#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N;
    int arr[100100];
    cin >> N;
    for(int i=0;i<N;i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+N);
    int M;
    int brr[100100];
    cin >> M;
    for(int i=0;i<M;i++)
    {
        cin >> brr[i];
        cout << binary_search(arr,arr+N,brr[i]) << "\n";
    }
    return 0;
}