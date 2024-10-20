#include <iostream>
#include <string>
#include <set>

using namespace std;

set<string> s;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cin.tie(nullptr);
    int n;
    cin >> n;
    s.insert("ChongChong");
    string x, y;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        if(s.find(x) != s.end()) s.insert(y);
        if(s.find(y) != s.end()) s.insert(x);
    }
    cout << s.size();
    return 0;
}