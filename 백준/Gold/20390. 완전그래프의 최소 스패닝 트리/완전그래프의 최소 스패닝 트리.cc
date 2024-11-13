#include <iostream> // v^2 프림 알고리즘
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;
const ll INF = ll(1e18);

ll n, a, b, c, d, result;
ll x[10010];
bool visited[10010];

ll change(ll i, ll j) {
    if(i > j) swap(i, j);
    return (((__int128)x[i] * a + (__int128)x[j] * b) % c) ^ d;
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> n >> a >> b >> c >> d;
    vector<ll> dist(n, INF); 
    dist[0] = 0;
    for(int i = 0; i < n; i++) cin >> x[i];
    for(int i = 0; i < n; i++) {
        ll cur = 0;
        ll min_dist = INF;
        for(int j = 0; j < n; j++) {
            if(!visited[j] && min_dist > dist[j]) {
                min_dist = dist[j];
                cur = j;
            }
        }
        result += min_dist;
        visited[cur] = 1;
        for(int j = 0; j < n; j++) {
            if(visited[j]) continue;
            if(change(cur, j) > dist[j]) continue;
            dist[j] = change(cur, j);
        }
    }
    cout << result;
    return 0;
}