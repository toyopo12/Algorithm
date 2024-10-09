#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

vector<pair<string, int>> v;
vector<string> s;

bool cmp1(pair<string, int> a, pair<string, int> b){
    if(a.second == b.second) return a.first + b.first > b.first + a.first;
    return a.second > b.second;
}

bool cmp2(string a, string b){
    return a + b > b + a;
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cin.tie(nullptr);
    int k, n;
    cin >> k >> n;
    for(int i = 0; i < k; i++){
        int good = 0;
        int tencount = 0;
        cin >> good;
        string v1 = to_string(good);
        while(good != 0){
            good /= 10;
            tencount++;
        }
        v.push_back({v1, tencount});
    }
    sort(v.begin(), v.end(), cmp1);
    for(int i = 0; i < n - k; i++) s.push_back(v[0].first);
    for(int i = 0; i < k; i++) s.push_back(v[i].first);
    sort(s.begin(), s.end(), cmp2);
    for(int i = 0; i < n; i++) cout << s[i];
    return 0;
}