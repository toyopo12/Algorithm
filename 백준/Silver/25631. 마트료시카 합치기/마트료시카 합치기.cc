#include <iostream>
#include <algorithm>

using namespace std;

int arr[1010];
int god = 1;
int good = 1;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n);
    for(int i = 1; i < n; i++){
        if(arr[i] != arr[i - 1]){
            if(good < god) good = god;
            god = 1;
        }
        else god++;
    }
    if(good < god) good = god;
    cout << good;
    return 0;
}