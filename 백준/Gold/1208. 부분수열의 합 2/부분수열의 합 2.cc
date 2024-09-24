#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int arr[22];
int brr[22];
vector<int> a;
vector<int> b;
long long finish;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, s;
    cin >> n >> s;
    int halfn = n / 2;
    for(int i = 0; i < halfn; i++) cin >> arr[i];
    for(int i = 0; i < n - halfn; i++) cin >> brr[i];
    a.push_back(0);
    b.push_back(0);
    for(int i = 0; i < halfn; i++){
        int big = a.size();
        for(int j = 0; j < big; j++) a.push_back(a[j] + arr[i]);
    }
    for(int i = 0; i < n - halfn; i++){
        int big = b.size();
        for(int j = 0; j < big; j++) b.push_back(b[j] + brr[i]);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for(int i = 0; i < a.size(); i++){
        int pick = s - a[i];
        finish += upper_bound(b.begin(), b.end(), pick) - lower_bound(b.begin(), b.end(), pick);
    }
    if(s == 0) cout << finish - 1;
    else cout << finish;
    return 0;
}