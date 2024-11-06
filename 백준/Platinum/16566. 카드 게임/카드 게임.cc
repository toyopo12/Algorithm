#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;
bool visited[4000040];

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, m, k;
    cin >> n >> m >> k;
    for(int i = 0; i < m; i++){
        int x;
        cin >> x;
        visited[x] = 1;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < k; i++){
        int x;
        cin >> x;
        int target = upper_bound(v.begin(), v.end(), x) - v.begin();
        while(visited[v[target]] == 0) target++;
        cout << v[target] << '\n';
        visited[v[target]] = 0;
    }
    return 0;
}