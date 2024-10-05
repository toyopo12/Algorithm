#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
int maxnum;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, k;
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        int good;
        cin >> good;
        pq.push({good, i});
        if(i < k) continue;
        while(1){
            auto [x, y] = pq.top();
            if(y > i - k){
                maxnum = max(maxnum, x);
                break;
            }
            else pq.pop();
        }
    }
    cout << maxnum;
    return 0;
}