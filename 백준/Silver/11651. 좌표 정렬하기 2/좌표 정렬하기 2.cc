#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

pair<int, int> arr[100001];

bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.second == b.second) return a.first < b.first;
    else return a.second < b.second;
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> arr[i].first >> arr[i].second;
    sort(arr, arr + n , cmp);
    for(int i = 0; i < n; i++) cout << arr[i].first << " " << arr[i].second << '\n';
    return 0;
}