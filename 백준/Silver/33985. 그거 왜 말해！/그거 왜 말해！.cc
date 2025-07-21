#include <iostream>
using namespace std;

char c[300300];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }
    if (c[0] == 'A' && c[n - 1] == 'B') cout << "Yes";
    else cout << "No";

    return 0;
}