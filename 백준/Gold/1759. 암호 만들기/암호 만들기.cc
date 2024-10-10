#include <iostream>
#include <vector>

using namespace std;

int l, c;
vector<char> v;
vector<char> code;

void f(int cnt, int check, int now){
    if(cnt == l){
        if(check > 0 && l - check > 1){
            for(int i = 0; i < code.size(); i++) cout << code[i];
            cout << '\n';
        }
        return;
    }
    for(int i = now; i < c; i++){
        code.push_back(v[i]);
        if(v[i] == 'a' || v[i] == 'e' || v[i] == 'i' || v[i] == 'o' || v[i] == 'u') f(cnt + 1, check + 1, i + 1);
        else f(cnt + 1, check, i + 1);
        code.pop_back();
    }
    return;
}




int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cin.tie(nullptr);
    cin >> l >> c;
    for(int i = 0; i < c; i++){
        char x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    f(0, 0, 0);
    return 0;
}