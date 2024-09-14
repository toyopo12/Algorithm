#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int d[1010];
vector<pair<int,int>> v[1010];
int road[1010];
int village;
int check[1010];

void di1(int n){
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;
    for(int i = 1; i <= 1000; i++) d[i] = 0x7fffffff;
    d[n] = 0;
    pq.push({0,n});
    while(!pq.empty()){
        int x = pq.top().first;
        int y = pq.top().second;
        pq.pop();
        if(x > d[y]) continue;
        for(int i = 0; i < v[y].size(); i++){
            int a = v[y][i].first;
            int b = v[y][i].second;
            if(d[b] == 0 || d[b] > x + a){
                d[b] = x + a;
                pq.push({d[b],b});
            }
        }
    }
}

void di2(int n){
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;
    for(int i = 1; i <= 1000; i++) d[i] = 0x7fffffff;
    d[n] = 0;
    pq.push({0,n});
    while(!pq.empty()){
        int x = pq.top().first;
        int y = pq.top().second;
        pq.pop();
        if(y == village){
            check[n] = d[y];
            break;
        }
        for(int i = 0; i < v[y].size(); i++){
            int a = v[y][i].first;
            int b = v[y][i].second;
            if(d[b] == 0 || d[b] > x + a){
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
    cin >> n >> m >> village;
    for(int i = 0; i < m; i++){
        int x,y,cost;
        cin >> x >> y >> cost;
        v[x].push_back({cost,y});
    }
    di1(village);
    for(int i = 1; i <= n; i++) road[i] = d[i];
    for(int i = 1; i <= n; i++){
        di2(i);
        road[i] += check[i];
    }
    int finish = 0;
    for(int i = 1; i <= n; i++) if(finish < road[i]) finish = road[i];
    cout << finish;
    return 0;
}