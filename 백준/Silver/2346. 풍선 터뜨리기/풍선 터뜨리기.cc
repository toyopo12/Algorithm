#include <iostream>
#include <deque>

using namespace std;

deque<pair<int, int>> d;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;
        d.push_back({x, i});
    }
    while(!d.empty()){
        auto [a, b] = d.front();
        cout << b << " ";
        d.pop_front();
        if(a > 0){
            for(int i = 0; i < a - 1; i++){
                d.push_back(d.front());
                d.pop_front();
            }
        }
        else{
            for(int i = 0; i < -a; i++){
                d.push_front(d.back());
                d.pop_back();
            }
        }
    }
    return 0;
}