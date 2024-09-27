#include <iostream>
#include <algorithm>

using namespace std;

int numcard[500050];

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, m, x;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> numcard[i];
    sort(numcard, numcard + n);
    cin >> m;
    for(int i = 0; i < m; i++){
        cin >> x;
        if(x == numcard[lower_bound(numcard, numcard + n, x) - numcard] && lower_bound(numcard, numcard + n, x) - numcard < n) cout << "1 ";
        else cout << "0 ";
    }
    return 0;
}