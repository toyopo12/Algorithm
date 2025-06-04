#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    int n; cin >> n;
    int result = 0;
    while(n--) {
        string x; cin >> x;
        if (s == x) result++;
    }
    
    cout << result;

    return 0;
}