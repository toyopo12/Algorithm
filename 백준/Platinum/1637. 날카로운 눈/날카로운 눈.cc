#include <iostream>
#include <vector>
#include <tuple>

using namespace std;

vector<tuple<int, int, int>> v;
int N;

long long checking(long long x) {
    long long result = 0;
    for(int i = 0; i < N; i++) {
        if(get<0>(v[i]) <= x && x <= get<1>(v[i]))
            result += (x - get<0>(v[i])) / get<2>(v[i]) + 1;
        else if(get<1>(v[i]) < x)
            result += (get<1>(v[i]) - get<0>(v[i])) / get<2>(v[i]) + 1;
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> N;
    for(int i = 0; i < N; i++) {
        int A, C, B; cin >> A >> C >> B;
        v.push_back({A, C, B});
    }
    long long start = 0;
    long long end = 3000000001;
    while(start + 1 < end) {
        long long mid = (start + end) / 2;
        if(checking(mid) % 2 == 0) start = mid;
        else end = mid;
    }
    if(start == 3000000000) cout << "NOTHING";
    else cout << end << " " << checking(end) - checking(end - 1);
    return 0;
}