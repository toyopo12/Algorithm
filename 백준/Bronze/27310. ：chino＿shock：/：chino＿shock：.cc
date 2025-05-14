#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);

    int result = 0;
    string s; cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ':') result++;
        else if (s[i] == '_') result += 5;
    }
    
    cout << result + s.size();

    return 0;
}