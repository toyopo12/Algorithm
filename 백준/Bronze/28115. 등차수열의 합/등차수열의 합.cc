#include <iostream>

using namespace std;

int arr[100010];
int d;
bool checking;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int N; cin >> N;
    for(int i = 0; i < N; i++) cin >> arr[i];
    d = arr[1] - arr[0];
    for(int i = 2; i < N; i++) {
        if(d != arr[i] - arr[i - 1]) checking = true;
    }
    if(checking) cout << "NO";
    else {
        cout << "YES\n";
        for(int i = 0; i < N; i++) cout << arr[i] << " ";
        cout << '\n';
        for(int i = 0; i < N; i++) cout << "0 ";
    }
    return 0;
}