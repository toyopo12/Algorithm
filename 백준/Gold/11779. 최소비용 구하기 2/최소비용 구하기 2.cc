#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int d[1010];
int route[1010];
vector<pair<int,int>> v[1010];
priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;
vector<int> routetwo;

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
                route[b] = y;
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
    int n,m;
    int start,end;
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int x,y,cost;
        cin >> x >> y >> cost;
        v[x].push_back({cost,y});
    }
    for(int i = 1; i <= n; i++) d[i] = 0x7fffffff;
    cin >> start >> end;
    d[start] = 0;
    pq.push({0,start});
    di();
    cout << d[end] << '\n';
    int check = end;
    while(check != 0){
        routetwo.push_back(check);
        check = route[check];
    }
    cout << routetwo.size() << '\n';
    for(int i = routetwo.size() - 1; i >= 0; i--) cout << routetwo[i] << " ";
    return 0;
}