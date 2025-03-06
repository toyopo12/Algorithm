#include <iostream>
#include <queue>

using namespace std;

queue<int> q;
int N;

int main() {
    cin >> N;
    for (int i = 1; i <= N; i++) {
        q.push(i);
    }
    for (int i = 1; i <= N; i++) {
        cout << q.front() << " ";
        q.pop();
        q.push(q.front());
        q.pop();
    }
    return 0;
}