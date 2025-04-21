#include <iostream>
using namespace std;

int arr[200020];

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M; cin >> N >> M;

    for (int i = 0; i < M; i++) {
        int k, s, e; cin >> k >> s >> e;
        if (arr[k] <= s) {
            arr[k] = e;
            cout << "YES\n";
        }
        else cout << "NO\n";
    }

    return 0;
}