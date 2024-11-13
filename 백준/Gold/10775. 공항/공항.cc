#include <iostream>

using namespace std;

int parent[100010];
int counting;

int find(int a) {
    if(parent[a] == a) return a;
    else return parent[a] = find(parent[a]);
}
void uni(int a, int b) {
    a = find(a);
    b = find(b);
    if(a > b) swap(a, b);
    parent[b] = a;
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int g, p;
    cin >> g >> p;
    for(int i = 1; i <= g; i++) parent[i] = i;
    for(int i = 0; i < p; i++) {
        int x;
        cin >> x;
        x = find(x);
        if(x == 0) break;
        uni(x, x - 1);
        counting++;
    }
    cout << counting;
    return 0;
}