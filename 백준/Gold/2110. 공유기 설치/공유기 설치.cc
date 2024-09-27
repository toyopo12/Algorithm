#include <iostream>
#include <algorithm>

using namespace std;

int arr[200002];
int n, c;

bool check(int mid){
    int homenum = 1;
    int nhome = arr[0] + mid;
    for(int i = 1; i < n; i++){
        if(arr[i] >= nhome){
            nhome = arr[i] + mid;
            homenum++;
        }
    }
    if(homenum >= c) return 1;
    else return 0;
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> c;
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n);
    int start = 1;
    int end = 1000000001;
    while(start < end - 1){
        int mid = (start + end) / 2;
        if(check(mid) == 1) start = mid;
        else end = mid;
    }
    cout << start;
    return 0;
}