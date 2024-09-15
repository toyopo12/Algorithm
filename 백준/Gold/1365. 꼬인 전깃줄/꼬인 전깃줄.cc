#include <iostream>
#include <algorithm>

using namespace std;

int arr[500010];
int lis[500010];
int lissize;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        if(lissize == 0){
            lis[0] = arr[i];
            lissize++;
        }
        else if(lis[lissize - 1] < arr[i]) lis[lissize++] = arr[i];
        else{
            int *check = lower_bound(lis, lis + lissize, arr[i]);
            *check = arr[i];
        }
    }
    cout << n - lissize << '\n';
    return 0;
}