#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int N;
    int arr[500500];
    cin >> N;
    for(int i=0;i<N;i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+N);
    int M;
    int brr[500500];
    cin >> M;
    for(int i=0;i<M;i++)
    {
        cin >> brr[i];
        cout << binary_search(arr,arr+N,brr[i]) << " ";
    }
    return 0;
}