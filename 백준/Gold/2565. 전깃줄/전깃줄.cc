#include <iostream>
#include <algorithm>

using namespace std;

pair<int,int> arr[500010];
int lis[500010];
int lissize;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> arr[i].first >> arr[i].second;
    sort(arr + 1, arr + 1 + n);
    for(int i = 1; i <= n; i++){
        if(lissize == 0){
            lis[0] = arr[i].second;
            lissize++;
        }
        else if(lis[lissize - 1] < arr[i].second) lis[lissize++] = arr[i].second;
        else{
            int *check = lower_bound(lis, lis + lissize, arr[i].second);
            *check = arr[i].second;
        }
    }
    cout << n - lissize << '\n';
    return 0;
}