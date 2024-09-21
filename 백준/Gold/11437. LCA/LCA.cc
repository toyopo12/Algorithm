#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v[100001];
int level[100001];
int parent[100001][20];

void init(int node, int nnode, int nodelevel){
    level[node] = nodelevel;
    parent[node][0] = nnode;
    for(int i = 1; i <= 16; i++) parent[node][i] = parent[parent[node][i - 1]][i - 1];
    for(int i = 0; i < v[node].size(); i++) if(v[node][i] != nnode) init(v[node][i], node, nodelevel + 1);
}

int lca(int a, int b){
    if(a == 1 || b == 1) return 1;
    if(level[a] < level[b]) swap(a, b);
    if(level[a] != level[b]) for(int i = 16; i >= 0; i--) if(level[parent[a][i]] >= level[b]) a = parent[a][i]; // 쓰고보니 축약가능
    int ret = a;
    if(a != b){
        for(int i = 16; i >= 0; i--){
            if (parent[a][i] != parent[b][i]){
                a = parent[a][i];
                b = parent[b][i];
            }
            ret = parent[a][i];
        }
    }
    return ret;
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n;
    int a, b;
    for(int i = 0; i < n - 1; i++){
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    init(1, 0, 1);
    cin >> m;
    int c, d;
    for(int i = 0; i < m; i++){
        cin >> c >> d;
        cout << lca(c, d) << '\n';
    }
    return 0;
}