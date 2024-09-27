#include <iostream>
#include <algorithm>

using namespace std;

int province[100010];
long long n, m;

bool check(int mid){
    long long good = 0;
    for(int i = 0; i < n; i++) good += min(province[i], mid);
    if(good > m) return 0;
    else return 1;
}

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> n;
    for(int i = 0; i < n; i++) cin >> province[i];
    sort(province, province + n, greater<>());
    cin >> m;
    int start = 0;
    int end = 1000000002;
    while(start < end - 1){
        int mid = (start + end) / 2;
        if(check(mid) == 1) start = mid;
        else end = mid;
    }
    if(start == 1000000001) cout << province[0];
    else cout << start;
    return 0;
}