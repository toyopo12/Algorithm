#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int d[808];
vector<pair<int,int>> v[808];
long long finish = 0x7fffffff;

void di(int n){
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;
    for(int i = 1; i < 808; i++) d[i] = 0x7fffffff;
    d[n] = 0;
    pq.push({0,n});
    while(!pq.empty()){
        int x = pq.top().first;
        int y = pq.top().second;
        pq.pop();
        if(x != d[y]) continue;
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
    int n,m;
    int onepoint,twopoint;
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int x,y,cost;
        cin >> x >> y >> cost;
        v[x].push_back({cost,y});
        v[y].push_back({cost,x});
    }
    cin >> onepoint >> twopoint;
    di(1);
    long long toone = d[onepoint];
    long long totwo = d[twopoint];
    di(onepoint);
    long long onetotwo = d[twopoint];
    long long oneton = d[n];
    di(twopoint);
    long long twoton= d[n];
    if(finish > toone + onetotwo + twoton) finish = toone + onetotwo + twoton;
    if(finish > totwo + onetotwo + oneton) finish = totwo + onetotwo + oneton;
    if(finish == 0x7fffffff) cout << "-1";
    else cout << finish;
    return 0;
}