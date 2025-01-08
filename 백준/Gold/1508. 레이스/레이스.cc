#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

vector<int> v;
bool visited[55];
int N, M, K;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> N >> M >> K;
    for(int i = 0; i < K; i++) {
        int x; cin >> x;
        v.push_back(x);
    }
    int start = 1;
    int end = N + 1;
    while(start < end - 1) {
        int mid = (start + end) / 2;
        bool checking = 0;
        for(int j = 0; j < K; j++) {
            int now = v[j];
            int nowhuman = 1;
            for(int i = j + 1; i < K; i++) {
                if(v[i] - now >= mid) {
                    now = v[i];
                    nowhuman++;
                }
            }
            if(nowhuman == M) {
                checking = 1;
                break;
            }
        }
        if(checking) start = mid;
        else end = mid;
    }
    for(int j = 0; j < K; j++) {
        memset(visited, 0, sizeof(visited));
        int now = v[j];
        int nowhuman = 1;
        visited[j] = 1;
        for(int i = j + 1; i < K; i++) {
            if(v[i] - now >= start) {
                visited[i] = 1;
                now = v[i];
                nowhuman++;
            }
            if(nowhuman == M) break;
        }
        if(nowhuman == M) break;
    }
    for(int i = 0; i < K; i++) cout << visited[i];
    return 0;
}