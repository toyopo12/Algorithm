#include <iostream>
#include <vector>
#include <queue>

using namespace std;

priority_queue<int, vector<int>, greater<int>> hpq;
priority_queue<int, vector<int>, less<int>> lpq;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n; cin >> n;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        if(i % 2 == 0) {
            lpq.push(x);
            if(!hpq.empty() && lpq.top() > hpq.top()) {
                lpq.push(hpq.top());
                hpq.push(lpq.top());
                lpq.pop();
                hpq.pop();
            }
        }
        else {
            hpq.push(x);
            if(lpq.top() > hpq.top()) {
                lpq.push(hpq.top());
                hpq.push(lpq.top());
                lpq.pop();
                hpq.pop();
            }
        }
        cout << lpq.top() << '\n';
    }
    return 0;
}