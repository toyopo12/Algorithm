#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v[100010];
int arr[100010];
bool visited[100010];
int check;
int N;
int y = 1;

void dfs(int x) {
    if(y == N) check = 1;
    if(!visited[x]) {
        visited[x] = 1;
        for(int i = 0; i < v[x].size(); i++) {
            int good = lower_bound(v[x].begin(), v[x].end(), arr[y]) - v[x].begin();
            if(v[x][good] == arr[y]) {
                y++;
                dfs(v[x][good]);
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> N;
    for(int i = 0; i < N - 1; i++) {
        int a, b; cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for(int i = 0; i < N; i++) cin >> arr[i];
    for(int i = 1; i <= N; i++) sort(v[i].begin(), v[i].end());
    dfs(1);
    if(check) cout << "1";
    else cout << "0";
    return 0;
}