#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T; cin >> T;
    while(T--) {
        bool checking = true;
        int counting = 0;
        string x; cin >> x;
        for(int i = 0; i < x.size(); i++) {
            if(x[i] == '(') counting++;
            else {
                counting--;
                if(counting < 0) checking = false;
            }
        }
        if(checking && counting == 0) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}