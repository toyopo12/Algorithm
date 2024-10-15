#include <iostream>
#include <queue>
#include <stack>

using namespace std;

queue<int> q;
stack<int> s;
bool a[100010];

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cin.tie(nullptr);
    int n, m;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(a[i] == 0) s.push(x);
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    cin >> m;
    for(int i = 0; i < m; i++){
        int x;
        cin >> x;
        q.push(x);
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}