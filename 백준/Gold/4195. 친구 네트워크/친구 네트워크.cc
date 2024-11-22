#include <iostream>
#include <string>
#include <map>

using namespace std;

int parent[200010];

int find(int x) {
    if(x == parent[x]) return x;
    else return parent[x] = find(parent[x]);
}

void uni(int x, int y) {
    x = find(x);
    y = find(y);
    parent[y] = x;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t; cin >> t;
    while(t--) {
        map<string, int> m;
        int counting = 0;
        int imp[200010] = {0};
        int f; cin >> f;
        for(int i = 0; i <= 2 * f; i++) parent[i] = i;
        while(f--) {
            string a, b; cin >> a >> b;
            if(m.find(a) == m.end()) {
                m.insert({a, counting});
                imp[m[a]] = 1;
                counting++;
            }
            if(m.find(b) == m.end()) {
                m.insert({b, counting});
                imp[m[b]] = 1;
                counting++;
            }
            if(find(m[a]) != find(m[b])) {
                imp[find(m[a])] += imp[find(m[b])];
                uni(find(m[a]), find(m[b]));
            }
            cout << imp[find(m[a])] << '\n';
        }
    }
    return 0;
}