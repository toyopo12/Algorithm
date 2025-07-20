#include <iostream>
#include <vector>
using namespace std;

int n;
int arr[20];
int result[6];

void hi(int start, int length)
{
    if (length == 6) {
        for (int i = 0; i < 6; i++) {
            cout << result[i] << " ";
        }
        cout << '\n';
        return;
    }
    for(int i = start; i < n; i++) {
        result[length] = arr[i];
        hi(i + 1, length + 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    while (1) {
        cin >> n;
        if (n == 0) break;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        vector<int> v;
        hi(0, 0);
        cout << '\n';
    }
    return 0;
}