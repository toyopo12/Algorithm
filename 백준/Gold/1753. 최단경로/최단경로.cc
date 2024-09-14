#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int d[20020];
vector<pair<int,int>> v[20020];
priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;

void di(){
    while(!pq.empty()){
        int x = pq.top().first;
        int y = pq.top().second;
        pq.pop();
        if(x!=d[y]) continue;
        for(int i = 0; i < v[y].size(); i++){
            int a = v[y][i].first;
            int b = v[y][i].second;
            if(d[b] > x + a){
                d[b] = x + a;
                pq.push({d[b],b});
            }
        }
    }
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m,start;
    cin >> n >> m >> start;
    for(int i = 0; i < m; i++){
        int x,y,cost;
        cin >> x >> y >> cost;
        v[x].push_back({cost,y});
    }
    for(int i = 1; i <= n; i++) d[i] = 0x7fffffff;
    d[start] = 0;
    pq.push({0,start});
    di();
    for(int i = 1; i <= n; i++){
        if(d[i] == 0x7fffffff) cout << "INF";
        else cout << d[i];
        cout << '\n';
    }
    return 0;
}