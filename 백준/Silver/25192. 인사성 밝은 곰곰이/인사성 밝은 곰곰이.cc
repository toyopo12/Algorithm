#include <iostream>
#include <string>
#include <set>

using namespace std;

int gomgom = 0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while(n != 0){
        set<string> s;
        string y;
        while(1){
            n--;
            cin >> y;
            if(y == "ENTER") break;
            s.insert(y);
            if(n == 0) break;
        }
        gomgom += s.size();
    }
    cout << gomgom << '\n';
    return 0;
}