#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    vector<int> v(N);

    for (int i = 0; i < N; i++) cin >> v[i];

    int x;
    for (int i = 0; i < N; i++) {
        cin >> x;
        v[i] = (v[i] - 1) / x + 1;
    }

    long long start = 0;
    long long end = 1000000000;
    while(start < end - 1) {
        long long mid = (start + end) / 2;
        long long count = 0;
        for (int i = 0; i < N; i++) {
            if(v[i] > mid) {
                count += v[i] - mid;
            }
        }
        if(count <= mid) end = mid;
        else start = mid;
    }

    cout << end << '\n';

    return 0;
}