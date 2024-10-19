#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

map<string, int> ma;
set<string> s;
vector<pair<string, int>> v;

bool cmp(pair<string, int> a, pair<string, int> b){
    if(a.second != b.second) return a.second > b.second;
    else if(a.first.size() != b.first.size()) return a.first.size() > b.first.size();
    else return a.first < b.first;
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    string x;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(x.size() >= m){
            ma[x]++;
            s.insert(x);
        }
    }
    for(auto itr = s.begin(); itr != s.end(); itr++) v.push_back({*itr, ma[*itr]});
    sort(v.begin(), v.end(), cmp);
    for(int i = 0; i < v.size(); i++) cout << v[i].first << '\n';
    return 0;
}