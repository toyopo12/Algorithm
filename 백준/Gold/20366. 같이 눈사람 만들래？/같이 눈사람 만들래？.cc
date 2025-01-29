#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>
#include <cstring>
#include <set>
#include <map>

using namespace std;

int N;
int arr[606];
int result = 2000000002;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cin.tie(nullptr);
    cin >> N;
    for(int i = 0; i < N; i++) cin >> arr[i];
    sort(arr, arr + N);
    for(int i = 0; i < N; i++) {
        for(int j = i + 1; j < N; j++) {
            int search = arr[i] + arr[j];
            for(int k = i + 1; k < N - 1; k++) {
                if(j == k) continue;
                int choose = lower_bound(arr, arr + N, search - arr[k]) - arr;
                //헐
                int start = max(choose, k + 1) - 1;
                int startnum = arr[start + 1];
                while(1) {
                    start++;
                    if(startnum != arr[start]) break;
                    if(start == j) continue;
                    else {
                        if(result > abs(search - arr[k] - arr[start])) {
                            result = abs(search - arr[k] - arr[start]);
                        }
                        break;
                    }
                }
                choose--;
                if(choose == j) continue;
                if(k < choose && choose < N) {
                    if(result > abs(search - arr[k] - arr[choose])) {
                        result = abs(search - arr[k] - arr[choose]);
                    }
                }
            }
        }
    }
    cout << result;
    return 0;
}