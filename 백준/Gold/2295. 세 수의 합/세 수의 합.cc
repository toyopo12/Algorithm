#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>
#include <cstring>
#include <set>

using namespace std;

vector<int> v;
vector<int> good;
int n, result;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cin.tie(nullptr);
    cin >> n;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            good.push_back(v[i] + v[j]);
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            good.push_back(v[i] + v[j]);
        }
    }
    sort(good.begin(), good.end());
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            if(good[lower_bound(good.begin(), good.end(), v[j] - v[i]) - good.begin()] == v[j] - v[i]) {
                if(result < v[j]) {
                    result = v[j];
                }
            }
        }
    }
    cout << result;
    return 0;
}