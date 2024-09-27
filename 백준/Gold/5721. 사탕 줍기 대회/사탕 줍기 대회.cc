#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    while(1){
        int xdp[100001];
        int ydp[100001];
        int m, n;
        cin >> m >> n;
        if(m == 0 && n == 0) break;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++) cin >> xdp[j];
            xdp[2] += xdp[0];
            for(int j = 3; j < n; j++) xdp[j] += max(xdp[j - 2], xdp[j - 3]);
            ydp[i] = max(xdp[n - 1], xdp[n - 2]);
        }
        ydp[2] += ydp[0];
        for(int i = 3; i < m; i++) ydp[i] += max(ydp[i - 2], ydp[i - 3]);
        cout << max(ydp[m - 1], ydp[m - 2]) << '\n';
    }
    return 0;
}