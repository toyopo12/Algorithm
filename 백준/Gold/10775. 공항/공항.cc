#include <iostream>

using namespace std;

int parent[100010];
int counting;

int find(int x) {
    if(x == parent[x]) return x;
    else return parent[x] = find(parent[x]);
}

void uni(int x, int y) {
    x = find(x);
    y = find(y);
    if(x != y) parent[x] = y;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int g, p; cin >> g >> p;
    for(int i = 1; i <= g; i++) parent[i] = i;
    for(int i = 0; i < p; i++) {
        int fly; cin >> fly;
        fly = find(fly);
        if(fly == 0) break;
        uni(fly, fly - 1);
        counting++;
    }
    cout << counting;
    return 0;
}