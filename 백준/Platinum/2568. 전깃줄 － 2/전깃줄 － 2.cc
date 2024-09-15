#include <iostream>
#include <algorithm>

using namespace std;

pair<int,int> arr[500010];
int lis[500010];
int dex[500010];
int lissize;
bool good[500010];

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
            dex[arr[i].first] = 1;
            lissize++;
        }
        else if(lis[lissize - 1] < arr[i].second){
            lis[lissize++] = arr[i].second;
            dex[arr[i].first] = lissize;
        }
        else{
            int *check = lower_bound(lis, lis + lissize, arr[i].second);
            *check = arr[i].second;
            dex[arr[i].first] = distance(lis, check) + 1;
        }
    }
    cout << n - lissize << '\n';
    for(int i = n; i > 0; i--) good[arr[i].first] = 1;
    for(int i = n; i > 0; i--){
        if(dex[arr[i].first] == lissize){
            good[arr[i].first] = 0;
            lissize--;
        }
    }
    for(int i = 1; i <= n; i++) if(good[arr[i].first] == 1) cout << arr[i].first << '\n';
    return 0;
}