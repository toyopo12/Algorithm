#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string x; cin >> x;
    for (int i = 0; i < x.size(); i++) {
        if(x[i] == 'B') cout << "v";
        else if(x[i] == 'E') cout << "ye";
        else if(x[i] == 'H') cout << "n";
        else if(x[i] == 'P') cout << "r";
        else if(x[i] == 'C') cout << "s";
        else if(x[i] == 'Y') cout << "u";
        else if(x[i] == 'X') cout << "h";
        else cout << char(x[i] + 32);
    }
    return 0;
}